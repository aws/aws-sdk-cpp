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
    AWS_TAXSETTINGS_API GetTaxInheritanceResult();
    AWS_TAXSETTINGS_API GetTaxInheritanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TAXSETTINGS_API GetTaxInheritanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The tax inheritance status. </p>
     */
    inline const HeritageStatus& GetHeritageStatus() const{ return m_heritageStatus; }
    inline void SetHeritageStatus(const HeritageStatus& value) { m_heritageStatus = value; }
    inline void SetHeritageStatus(HeritageStatus&& value) { m_heritageStatus = std::move(value); }
    inline GetTaxInheritanceResult& WithHeritageStatus(const HeritageStatus& value) { SetHeritageStatus(value); return *this;}
    inline GetTaxInheritanceResult& WithHeritageStatus(HeritageStatus&& value) { SetHeritageStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTaxInheritanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTaxInheritanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTaxInheritanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    HeritageStatus m_heritageStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
