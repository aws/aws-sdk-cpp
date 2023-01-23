/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Input to associate lens reviews.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/AssociateLensesInput">AWS
   * API Reference</a></p>
   */
  class AssociateLensesRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API AssociateLensesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateLenses"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }

    
    inline AssociateLensesRequest& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline AssociateLensesRequest& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline AssociateLensesRequest& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetLensAliases() const{ return m_lensAliases; }

    
    inline bool LensAliasesHasBeenSet() const { return m_lensAliasesHasBeenSet; }

    
    inline void SetLensAliases(const Aws::Vector<Aws::String>& value) { m_lensAliasesHasBeenSet = true; m_lensAliases = value; }

    
    inline void SetLensAliases(Aws::Vector<Aws::String>&& value) { m_lensAliasesHasBeenSet = true; m_lensAliases = std::move(value); }

    
    inline AssociateLensesRequest& WithLensAliases(const Aws::Vector<Aws::String>& value) { SetLensAliases(value); return *this;}

    
    inline AssociateLensesRequest& WithLensAliases(Aws::Vector<Aws::String>&& value) { SetLensAliases(std::move(value)); return *this;}

    
    inline AssociateLensesRequest& AddLensAliases(const Aws::String& value) { m_lensAliasesHasBeenSet = true; m_lensAliases.push_back(value); return *this; }

    
    inline AssociateLensesRequest& AddLensAliases(Aws::String&& value) { m_lensAliasesHasBeenSet = true; m_lensAliases.push_back(std::move(value)); return *this; }

    
    inline AssociateLensesRequest& AddLensAliases(const char* value) { m_lensAliasesHasBeenSet = true; m_lensAliases.push_back(value); return *this; }

  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_lensAliases;
    bool m_lensAliasesHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
