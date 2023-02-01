/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/LaunchProfileInitialization.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace NimbleStudio
{
namespace Model
{
  class GetLaunchProfileInitializationResult
  {
  public:
    AWS_NIMBLESTUDIO_API GetLaunchProfileInitializationResult();
    AWS_NIMBLESTUDIO_API GetLaunchProfileInitializationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API GetLaunchProfileInitializationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The launch profile initialization.</p>
     */
    inline const LaunchProfileInitialization& GetLaunchProfileInitialization() const{ return m_launchProfileInitialization; }

    /**
     * <p>The launch profile initialization.</p>
     */
    inline void SetLaunchProfileInitialization(const LaunchProfileInitialization& value) { m_launchProfileInitialization = value; }

    /**
     * <p>The launch profile initialization.</p>
     */
    inline void SetLaunchProfileInitialization(LaunchProfileInitialization&& value) { m_launchProfileInitialization = std::move(value); }

    /**
     * <p>The launch profile initialization.</p>
     */
    inline GetLaunchProfileInitializationResult& WithLaunchProfileInitialization(const LaunchProfileInitialization& value) { SetLaunchProfileInitialization(value); return *this;}

    /**
     * <p>The launch profile initialization.</p>
     */
    inline GetLaunchProfileInitializationResult& WithLaunchProfileInitialization(LaunchProfileInitialization&& value) { SetLaunchProfileInitialization(std::move(value)); return *this;}

  private:

    LaunchProfileInitialization m_launchProfileInitialization;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
