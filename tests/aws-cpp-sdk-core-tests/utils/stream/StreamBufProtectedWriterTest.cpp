/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/stream/StreamBufProtectedWriter.h>
#include <aws/core/utils/memory/stl/AWSDeque.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <sstream>
#include <deque>

using namespace Aws::Utils::Stream;

class StreamBufProtectedWriterTest : public Aws::Testing::AwsCppSdkGTestSuite {};

class MockedBuffer {
public:
    MockedBuffer(std::initializer_list<Aws::String> strings) : data_(strings) {}
    
    Aws::String read() {
        if (data_.empty()) {
          return {};
        }
        Aws::String result = data_.front();
        data_.pop_front();
        return result;
    }
    
private:
    Aws::Deque<Aws::String> data_;
};

TEST_F(StreamBufProtectedWriterTest, ShouldBeAbleToAccessStreamAfterWriteFunction) {
  Aws::StringStream bufferedStream;
  Aws::StringStream output;
  MockedBuffer srcBuffer({ "joker",
    "skull",
    "panther",
    "mona"});
  Aws::String leftover{};
  StreamBufProtectedWriter::WriteToBuffer(bufferedStream,
    [&srcBuffer, &leftover](char* dst, uint64_t dstSz, uint64_t& read) -> bool {
      Aws::String data{};
      if (!leftover.empty()) {
        data = leftover;
        leftover.clear();
      } else {
        data = srcBuffer.read();
        if (data.empty()) {
          return false;
        }
      }
      if (data.size() > dstSz) {
        leftover = data.substr(static_cast<size_t>(dstSz));
        read = dstSz;
        memcpy(dst, data.c_str(), static_cast<size_t>(dstSz));
      } else {
        read = data.size();
        memcpy(dst, data.c_str(), static_cast<size_t>(read));
      }
      return true;
    },
    [&bufferedStream, &output](uint64_t read) -> void {
      AWS_UNREFERENCED_PARAM(read);
      output << bufferedStream.rdbuf();
    });
  EXPECT_EQ(output.str(), "jokerskullpanthermona");
}
