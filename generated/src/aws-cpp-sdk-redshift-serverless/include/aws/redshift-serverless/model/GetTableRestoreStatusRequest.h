/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class GetTableRestoreStatusRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API GetTableRestoreStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTableRestoreStatus"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the <code>RestoreTableFromSnapshot</code> request to return status
     * for.</p>
     */
    inline const Aws::String& GetTableRestoreRequestId() const { return m_tableRestoreRequestId; }
    inline bool TableRestoreRequestIdHasBeenSet() const { return m_tableRestoreRequestIdHasBeenSet; }
    template<typename TableRestoreRequestIdT = Aws::String>
    void SetTableRestoreRequestId(TableRestoreRequestIdT&& value) { m_tableRestoreRequestIdHasBeenSet = true; m_tableRestoreRequestId = std::forward<TableRestoreRequestIdT>(value); }
    template<typename TableRestoreRequestIdT = Aws::String>
    GetTableRestoreStatusRequest& WithTableRestoreRequestId(TableRestoreRequestIdT&& value) { SetTableRestoreRequestId(std::forward<TableRestoreRequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableRestoreRequestId;
    bool m_tableRestoreRequestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
