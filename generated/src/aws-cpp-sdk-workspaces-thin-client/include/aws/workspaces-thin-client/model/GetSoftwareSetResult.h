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
    AWS_WORKSPACESTHINCLIENT_API GetSoftwareSetResult() = default;
    AWS_WORKSPACESTHINCLIENT_API GetSoftwareSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESTHINCLIENT_API GetSoftwareSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes a software set.</p>
     */
    inline const SoftwareSet& GetSoftwareSet() const { return m_softwareSet; }
    template<typename SoftwareSetT = SoftwareSet>
    void SetSoftwareSet(SoftwareSetT&& value) { m_softwareSetHasBeenSet = true; m_softwareSet = std::forward<SoftwareSetT>(value); }
    template<typename SoftwareSetT = SoftwareSet>
    GetSoftwareSetResult& WithSoftwareSet(SoftwareSetT&& value) { SetSoftwareSet(std::forward<SoftwareSetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSoftwareSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SoftwareSet m_softwareSet;
    bool m_softwareSetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
