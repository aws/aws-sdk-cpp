/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/HeritageStatus.h>
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
namespace TaxSettings
{
namespace Model
{
  class GetTaxInheritanceResult
  {
  public:
    AWS_TAXSETTINGS_API GetTaxInheritanceResult() = default;
    AWS_TAXSETTINGS_API GetTaxInheritanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TAXSETTINGS_API GetTaxInheritanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The tax inheritance status. </p>
     */
    inline HeritageStatus GetHeritageStatus() const { return m_heritageStatus; }
    inline void SetHeritageStatus(HeritageStatus value) { m_heritageStatusHasBeenSet = true; m_heritageStatus = value; }
    inline GetTaxInheritanceResult& WithHeritageStatus(HeritageStatus value) { SetHeritageStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTaxInheritanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    HeritageStatus m_heritageStatus{HeritageStatus::NOT_SET};
    bool m_heritageStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
