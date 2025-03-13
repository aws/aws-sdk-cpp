/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class CopyProductResult
  {
  public:
    AWS_SERVICECATALOG_API CopyProductResult() = default;
    AWS_SERVICECATALOG_API CopyProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API CopyProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use to track the progress of the operation.</p>
     */
    inline const Aws::String& GetCopyProductToken() const { return m_copyProductToken; }
    template<typename CopyProductTokenT = Aws::String>
    void SetCopyProductToken(CopyProductTokenT&& value) { m_copyProductTokenHasBeenSet = true; m_copyProductToken = std::forward<CopyProductTokenT>(value); }
    template<typename CopyProductTokenT = Aws::String>
    CopyProductResult& WithCopyProductToken(CopyProductTokenT&& value) { SetCopyProductToken(std::forward<CopyProductTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CopyProductResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_copyProductToken;
    bool m_copyProductTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
