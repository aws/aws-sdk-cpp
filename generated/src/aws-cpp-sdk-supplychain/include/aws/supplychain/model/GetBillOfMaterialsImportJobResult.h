/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/model/BillOfMaterialsImportJob.h>
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
namespace SupplyChain
{
namespace Model
{
  /**
   * <p>The response parameters for GetBillOfMaterialsImportJob.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/GetBillOfMaterialsImportJobResponse">AWS
   * API Reference</a></p>
   */
  class GetBillOfMaterialsImportJobResult
  {
  public:
    AWS_SUPPLYCHAIN_API GetBillOfMaterialsImportJobResult();
    AWS_SUPPLYCHAIN_API GetBillOfMaterialsImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPLYCHAIN_API GetBillOfMaterialsImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The BillOfMaterialsImportJob.</p>
     */
    inline const BillOfMaterialsImportJob& GetJob() const{ return m_job; }

    /**
     * <p>The BillOfMaterialsImportJob.</p>
     */
    inline void SetJob(const BillOfMaterialsImportJob& value) { m_job = value; }

    /**
     * <p>The BillOfMaterialsImportJob.</p>
     */
    inline void SetJob(BillOfMaterialsImportJob&& value) { m_job = std::move(value); }

    /**
     * <p>The BillOfMaterialsImportJob.</p>
     */
    inline GetBillOfMaterialsImportJobResult& WithJob(const BillOfMaterialsImportJob& value) { SetJob(value); return *this;}

    /**
     * <p>The BillOfMaterialsImportJob.</p>
     */
    inline GetBillOfMaterialsImportJobResult& WithJob(BillOfMaterialsImportJob&& value) { SetJob(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetBillOfMaterialsImportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetBillOfMaterialsImportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetBillOfMaterialsImportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    BillOfMaterialsImportJob m_job;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
