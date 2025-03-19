/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSMContacts
{
namespace Model
{

  /**
   * <p>Information about overrides to an on-call rotation shift.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ShiftDetails">AWS
   * API Reference</a></p>
   */
  class ShiftDetails
  {
  public:
    AWS_SSMCONTACTS_API ShiftDetails() = default;
    AWS_SSMCONTACTS_API ShiftDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API ShiftDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resources Names (ARNs) of the contacts who were replaced in a
     * shift when an override was created. If the override is deleted, these contacts
     * are restored to the shift.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOverriddenContactIds() const { return m_overriddenContactIds; }
    inline bool OverriddenContactIdsHasBeenSet() const { return m_overriddenContactIdsHasBeenSet; }
    template<typename OverriddenContactIdsT = Aws::Vector<Aws::String>>
    void SetOverriddenContactIds(OverriddenContactIdsT&& value) { m_overriddenContactIdsHasBeenSet = true; m_overriddenContactIds = std::forward<OverriddenContactIdsT>(value); }
    template<typename OverriddenContactIdsT = Aws::Vector<Aws::String>>
    ShiftDetails& WithOverriddenContactIds(OverriddenContactIdsT&& value) { SetOverriddenContactIds(std::forward<OverriddenContactIdsT>(value)); return *this;}
    template<typename OverriddenContactIdsT = Aws::String>
    ShiftDetails& AddOverriddenContactIds(OverriddenContactIdsT&& value) { m_overriddenContactIdsHasBeenSet = true; m_overriddenContactIds.emplace_back(std::forward<OverriddenContactIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_overriddenContactIds;
    bool m_overriddenContactIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
