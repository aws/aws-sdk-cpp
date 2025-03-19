/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/InventoryDeletionSummary.h>
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
namespace SSM
{
namespace Model
{
  class DeleteInventoryResult
  {
  public:
    AWS_SSM_API DeleteInventoryResult() = default;
    AWS_SSM_API DeleteInventoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DeleteInventoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Every <code>DeleteInventory</code> operation is assigned a unique ID. This
     * option returns a unique ID. You can use this ID to query the status of a delete
     * operation. This option is useful for ensuring that a delete operation has
     * completed before you begin other operations. </p>
     */
    inline const Aws::String& GetDeletionId() const { return m_deletionId; }
    template<typename DeletionIdT = Aws::String>
    void SetDeletionId(DeletionIdT&& value) { m_deletionIdHasBeenSet = true; m_deletionId = std::forward<DeletionIdT>(value); }
    template<typename DeletionIdT = Aws::String>
    DeleteInventoryResult& WithDeletionId(DeletionIdT&& value) { SetDeletionId(std::forward<DeletionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the inventory data type specified in the request.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    DeleteInventoryResult& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the delete operation. For more information about this summary,
     * see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/inventory-custom.html#delete-custom-inventory-summary">Deleting
     * custom inventory</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const InventoryDeletionSummary& GetDeletionSummary() const { return m_deletionSummary; }
    template<typename DeletionSummaryT = InventoryDeletionSummary>
    void SetDeletionSummary(DeletionSummaryT&& value) { m_deletionSummaryHasBeenSet = true; m_deletionSummary = std::forward<DeletionSummaryT>(value); }
    template<typename DeletionSummaryT = InventoryDeletionSummary>
    DeleteInventoryResult& WithDeletionSummary(DeletionSummaryT&& value) { SetDeletionSummary(std::forward<DeletionSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteInventoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deletionId;
    bool m_deletionIdHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    InventoryDeletionSummary m_deletionSummary;
    bool m_deletionSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
