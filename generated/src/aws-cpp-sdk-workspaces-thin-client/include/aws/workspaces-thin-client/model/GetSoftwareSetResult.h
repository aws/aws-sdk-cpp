/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
#include <aws/workspaces-thin-client/model/SoftwareSet.h>
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
namespace WorkSpacesThinClient
{
namespace Model
{
  class GetSoftwareSetResult
  {
  public:
    AWS_WORKSPACESTHINCLIENT_API GetSoftwareSetResult();
    AWS_WORKSPACESTHINCLIENT_API GetSoftwareSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESTHINCLIENT_API GetSoftwareSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes a software set.</p>
     */
    inline const SoftwareSet& GetSoftwareSet() const{ return m_softwareSet; }

    /**
     * <p>Describes a software set.</p>
     */
    inline void SetSoftwareSet(const SoftwareSet& value) { m_softwareSet = value; }

    /**
     * <p>Describes a software set.</p>
     */
    inline void SetSoftwareSet(SoftwareSet&& value) { m_softwareSet = std::move(value); }

    /**
     * <p>Describes a software set.</p>
     */
    inline GetSoftwareSetResult& WithSoftwareSet(const SoftwareSet& value) { SetSoftwareSet(value); return *this;}

    /**
     * <p>Describes a software set.</p>
     */
    inline GetSoftwareSetResult& WithSoftwareSet(SoftwareSet&& value) { SetSoftwareSet(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSoftwareSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSoftwareSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSoftwareSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SoftwareSet m_softwareSet;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
