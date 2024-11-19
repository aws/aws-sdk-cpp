/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/ResourceManager.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>

#include <future>
#include <random>

using namespace Aws::Utils;

class ExclusiveOwnershipResourceManagerTest : public Aws::Testing::AwsCppSdkGTestSuite {};

TEST_F(ExclusiveOwnershipResourceManagerTest, TestAcquire) {
  class TestResource {
   public:
    TestResource(int startVal) : m_value(startVal) {}

    int GetValue() { return m_value; }

    void DoSomething() {
      std::unique_lock<std::mutex> lock(m_lock, std::defer_lock);

      if (!lock.try_lock()) {
        m_fail = true;  // concurrent access detected
      }
      m_value += 1;
    }

    bool Fail() { return m_fail; }

   protected:
    int m_value = 0;
    std::mutex m_lock;
    bool m_fail = false;
  };

  ExclusiveOwnershipResourceManager<TestResource*> resourceManagerInTest;

  ASSERT_FALSE(resourceManagerInTest.HasResourcesAvailable());
  ASSERT_EQ(nullptr, resourceManagerInTest.TryAcquire(1l));

  static const size_t RESOURCES = 6;
  TestResource* resources[RESOURCES] = {};
  for (int i = 0; i < (int)RESOURCES; ++i) {
    resources[i] = new TestResource(i);
    resourceManagerInTest.Release(resources[i]);
  }

  static const size_t THREADS = 8;
  Aws::Vector<std::future<bool>> futures(THREADS);

  auto useResourceFn = [](ExclusiveOwnershipResourceManager<TestResource*>& resourceManager) -> bool {
    std::random_device rd;
    std::mt19937_64 randGen(rd());
    std::uniform_int_distribution<int64_t> randDist(0, 100);

    for (size_t j = 0; j < 50; ++j) {
      TestResource* resource = nullptr;
      while (!resource) {
        resource = resourceManager.TryAcquire(randDist(randGen));
      }
      // "do something" for rand ms
      int64_t sleepFor = randDist(randGen);
      std::this_thread::sleep_for(std::chrono::milliseconds(sleepFor));
      const int before = resource->GetValue();
      resource->DoSomething();
      EXPECT_NE(before, resource->GetValue());
      resourceManager.Release(resource);
    }
    return true;
  };

  for (size_t i = 0; i < THREADS; ++i) {
    futures[i] = std::async([&resourceManagerInTest, &useResourceFn]() -> bool { return useResourceFn(resourceManagerInTest); });
  }

  for (size_t i = 0; i < THREADS; ++i) {
    bool batchResult = futures[i].get();
    ASSERT_TRUE(batchResult);
  }

  // single thread test
  Aws::Vector<TestResource*> inUse;
  for (int i = 0; i < (int)RESOURCES; ++i) {
    TestResource* resource = resourceManagerInTest.TryAcquire(0l);
    ASSERT_TRUE(resource);
    const int before = resource->GetValue();
    resource->DoSomething();
    EXPECT_NE(before, resource->GetValue());
    inUse.push_back(resource);
  }
  for (auto resource : inUse) {
    resourceManagerInTest.Release(resource);
  }

  Aws::Vector<TestResource*> released = resourceManagerInTest.ShutdownAndWait(RESOURCES);
  ASSERT_EQ(RESOURCES, released.size());

  for (int i = 0; i < (int)RESOURCES; ++i) {
    ASSERT_FALSE(resources[i]->Fail());
    ASSERT_NE(i, resources[i]->GetValue());
    delete resources[i];
  }
}
