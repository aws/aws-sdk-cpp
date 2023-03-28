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
    AWS_SSMCONTACTS_API ShiftDetails();
    AWS_SSMCONTACTS_API ShiftDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API ShiftDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resources Names (ARNs) of the contacts who were replaced in a
     * shift when an override was created. If the override is deleted, these contacts
     * are restored to the shift.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOverriddenContactIds() const{ return m_overriddenContactIds; }

    /**
     * <p>The Amazon Resources Names (ARNs) of the contacts who were replaced in a
     * shift when an override was created. If the override is deleted, these contacts
     * are restored to the shift.</p>
     */
    inline bool OverriddenContactIdsHasBeenSet() const { return m_overriddenContactIdsHasBeenSet; }

    /**
     * <p>The Amazon Resources Names (ARNs) of the contacts who were replaced in a
     * shift when an override was created. If the override is deleted, these contacts
     * are restored to the shift.</p>
     */
    inline void SetOverriddenContactIds(const Aws::Vector<Aws::String>& value) { m_overriddenContactIdsHasBeenSet = true; m_overriddenContactIds = value; }

    /**
     * <p>The Amazon Resources Names (ARNs) of the contacts who were replaced in a
     * shift when an override was created. If the override is deleted, these contacts
     * are restored to the shift.</p>
     */
    inline void SetOverriddenContactIds(Aws::Vector<Aws::String>&& value) { m_overriddenContactIdsHasBeenSet = true; m_overriddenContactIds = std::move(value); }

    /**
     * <p>The Amazon Resources Names (ARNs) of the contacts who were replaced in a
     * shift when an override was created. If the override is deleted, these contacts
     * are restored to the shift.</p>
     */
    inline ShiftDetails& WithOverriddenContactIds(const Aws::Vector<Aws::String>& value) { SetOverriddenContactIds(value); return *this;}

    /**
     * <p>The Amazon Resources Names (ARNs) of the contacts who were replaced in a
     * shift when an override was created. If the override is deleted, these contacts
     * are restored to the shift.</p>
     */
    inline ShiftDetails& WithOverriddenContactIds(Aws::Vector<Aws::String>&& value) { SetOverriddenContactIds(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resources Names (ARNs) of the contacts who were replaced in a
     * shift when an override was created. If the override is deleted, these contacts
     * are restored to the shift.</p>
     */
    inline ShiftDetails& AddOverriddenContactIds(const Aws::String& value) { m_overriddenContactIdsHasBeenSet = true; m_overriddenContactIds.push_back(value); return *this; }

    /**
     * <p>The Amazon Resources Names (ARNs) of the contacts who were replaced in a
     * shift when an override was created. If the override is deleted, these contacts
     * are restored to the shift.</p>
     */
    inline ShiftDetails& AddOverriddenContactIds(Aws::String&& value) { m_overriddenContactIdsHasBeenSet = true; m_overriddenContactIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resources Names (ARNs) of the contacts who were replaced in a
     * shift when an override was created. If the override is deleted, these contacts
     * are restored to the shift.</p>
     */
    inline ShiftDetails& AddOverriddenContactIds(const char* value) { m_overriddenContactIdsHasBeenSet = true; m_overriddenContactIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_overriddenContactIds;
    bool m_overriddenContactIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
