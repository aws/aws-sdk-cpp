/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/LaunchProfileInitialization.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLaunchProfileInitializationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLaunchProfileInitializationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLaunchProfileInitializationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LaunchProfileInitialization m_launchProfileInitialization;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
