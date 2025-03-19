/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class UpdateRecoveryGroupResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API UpdateRecoveryGroupResult() = default;
    AWS_ROUTE53RECOVERYREADINESS_API UpdateRecoveryGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API UpdateRecoveryGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of a cell's Amazon Resource Names (ARNs).</p>
     */
    inline const Aws::Vector<Aws::String>& GetCells() const { return m_cells; }
    template<typename CellsT = Aws::Vector<Aws::String>>
    void SetCells(CellsT&& value) { m_cellsHasBeenSet = true; m_cells = std::forward<CellsT>(value); }
    template<typename CellsT = Aws::Vector<Aws::String>>
    UpdateRecoveryGroupResult& WithCells(CellsT&& value) { SetCells(std::forward<CellsT>(value)); return *this;}
    template<typename CellsT = Aws::String>
    UpdateRecoveryGroupResult& AddCells(CellsT&& value) { m_cellsHasBeenSet = true; m_cells.emplace_back(std::forward<CellsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the recovery group.</p>
     */
    inline const Aws::String& GetRecoveryGroupArn() const { return m_recoveryGroupArn; }
    template<typename RecoveryGroupArnT = Aws::String>
    void SetRecoveryGroupArn(RecoveryGroupArnT&& value) { m_recoveryGroupArnHasBeenSet = true; m_recoveryGroupArn = std::forward<RecoveryGroupArnT>(value); }
    template<typename RecoveryGroupArnT = Aws::String>
    UpdateRecoveryGroupResult& WithRecoveryGroupArn(RecoveryGroupArnT&& value) { SetRecoveryGroupArn(std::forward<RecoveryGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the recovery group.</p>
     */
    inline const Aws::String& GetRecoveryGroupName() const { return m_recoveryGroupName; }
    template<typename RecoveryGroupNameT = Aws::String>
    void SetRecoveryGroupName(RecoveryGroupNameT&& value) { m_recoveryGroupNameHasBeenSet = true; m_recoveryGroupName = std::forward<RecoveryGroupNameT>(value); }
    template<typename RecoveryGroupNameT = Aws::String>
    UpdateRecoveryGroupResult& WithRecoveryGroupName(RecoveryGroupNameT&& value) { SetRecoveryGroupName(std::forward<RecoveryGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    UpdateRecoveryGroupResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    UpdateRecoveryGroupResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateRecoveryGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_cells;
    bool m_cellsHasBeenSet = false;

    Aws::String m_recoveryGroupArn;
    bool m_recoveryGroupArnHasBeenSet = false;

    Aws::String m_recoveryGroupName;
    bool m_recoveryGroupNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
