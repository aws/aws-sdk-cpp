/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace PerformanceTest {

/**
 * Setup error for performance tests.
 */
struct SetupError {
  Aws::String message;
  SetupError() = default;
  SetupError(const Aws::String& msg) : message(msg) {}
};

/**
 * Base class for all performance tests.
 */
class PerformanceTestBase {
 public:
  virtual ~PerformanceTestBase() = default;

  /**
   * Initialize resources for the test.
   * @return Outcome indicating success or failure with error details
   */
  virtual Aws::Utils::Outcome<bool, SetupError> Setup() = 0;

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