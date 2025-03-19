/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>An OpsItems that shares something in common with the current OpsItem. For
   * example, related OpsItems can include OpsItems with similar error messages,
   * impacted resources, or statuses for the impacted resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RelatedOpsItem">AWS
   * API Reference</a></p>
   */
  class RelatedOpsItem
  {
  public:
    AWS_SSM_API RelatedOpsItem() = default;
    AWS_SSM_API RelatedOpsItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API RelatedOpsItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of an OpsItem related to the current OpsItem.</p>
     */
    inline const Aws::String& GetOpsItemId() const { return m_opsItemId; }
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }
    template<typename OpsItemIdT = Aws::String>
    void SetOpsItemId(OpsItemIdT&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::forward<OpsItemIdT>(value); }
    template<typename OpsItemIdT = Aws::String>
    RelatedOpsItem& WithOpsItemId(OpsItemIdT&& value) { SetOpsItemId(std::forward<OpsItemIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_opsItemId;
    bool m_opsItemIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
