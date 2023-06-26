/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/StudioComponent.h>
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
  class DeleteStudioComponentResult
  {
  public:
    AWS_NIMBLESTUDIO_API DeleteStudioComponentResult();
    AWS_NIMBLESTUDIO_API DeleteStudioComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API DeleteStudioComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the studio component.</p>
     */
    inline const StudioComponent& GetStudioComponent() const{ return m_studioComponent; }

    /**
     * <p>Information about the studio component.</p>
     */
    inline void SetStudioComponent(const StudioComponent& value) { m_studioComponent = value; }

    /**
     * <p>Information about the studio component.</p>
     */
    inline void SetStudioComponent(StudioComponent&& value) { m_studioComponent = std::move(value); }

    /**
     * <p>Information about the studio component.</p>
     */
    inline DeleteStudioComponentResult& WithStudioComponent(const StudioComponent& value) { SetStudioComponent(value); return *this;}

    /**
     * <p>Information about the studio component.</p>
     */
    inline DeleteStudioComponentResult& WithStudioComponent(StudioComponent&& value) { SetStudioComponent(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteStudioComponentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteStudioComponentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteStudioComponentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    StudioComponent m_studioComponent;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
