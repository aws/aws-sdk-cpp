﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/SupplyChainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The request parameters for GetBillOfMaterialsImportJob.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/GetBillOfMaterialsImportJobRequest">AWS
   * API Reference</a></p>
   */
  class GetBillOfMaterialsImportJobRequest : public SupplyChainRequest
  {
  public:
    AWS_SUPPLYCHAIN_API GetBillOfMaterialsImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBillOfMaterialsImportJob"; }

    AWS_SUPPLYCHAIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline GetBillOfMaterialsImportJobRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline GetBillOfMaterialsImportJobRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline GetBillOfMaterialsImportJobRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The BillOfMaterialsImportJob identifier.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline GetBillOfMaterialsImportJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline GetBillOfMaterialsImportJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline GetBillOfMaterialsImportJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
