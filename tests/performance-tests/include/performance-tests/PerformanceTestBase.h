/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

namespace PerformanceTest {

/**
 * Base class for all performance tests.
 */
class PerformanceTestBase {
 public:
  virtual ~PerformanceTestBase() = default;

  /**
   * Initialize resources for the test.
   */
  virtual void Setup() = 0;

  /**
   * Run the performance test operations.
   */
  virtual void Run() = 0;

  /**
   * Clean up resources created during setup.
   */
  virtual void TearDown() = 0;
};

}  // namespace PerformanceTest