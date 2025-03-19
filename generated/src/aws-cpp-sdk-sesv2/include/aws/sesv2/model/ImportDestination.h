/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/SuppressionListDestination.h>
#include <aws/sesv2/model/ContactListDestination.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains details about the resource destination the import job
   * is going to target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ImportDestination">AWS
   * API Reference</a></p>
   */
  class ImportDestination
  {
  public:
    AWS_SESV2_API ImportDestination() = default;
    AWS_SESV2_API ImportDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ImportDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains the action of the import job towards suppression
     * list.</p>
     */
    inline const SuppressionListDestination& GetSuppressionListDestination() const { return m_suppressionListDestination; }
    inline bool SuppressionListDestinationHasBeenSet() const { return m_suppressionListDestinationHasBeenSet; }
    template<typename SuppressionListDestinationT = SuppressionListDestination>
    void SetSuppressionListDestination(SuppressionListDestinationT&& value) { m_suppressionListDestinationHasBeenSet = true; m_suppressionListDestination = std::forward<SuppressionListDestinationT>(value); }
    template<typename SuppressionListDestinationT = SuppressionListDestination>
    ImportDestination& WithSuppressionListDestination(SuppressionListDestinationT&& value) { SetSuppressionListDestination(std::forward<SuppressionListDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the action of the import job towards a contact
     * list.</p>
     */
    inline const ContactListDestination& GetContactListDestination() const { return m_contactListDestination; }
    inline bool ContactListDestinationHasBeenSet() const { return m_contactListDestinationHasBeenSet; }
    template<typename ContactListDestinationT = ContactListDestination>
    void SetContactListDestination(ContactListDestinationT&& value) { m_contactListDestinationHasBeenSet = true; m_contactListDestination = std::forward<ContactListDestinationT>(value); }
    template<typename ContactListDestinationT = ContactListDestination>
    ImportDestination& WithContactListDestination(ContactListDestinationT&& value) { SetContactListDestination(std::forward<ContactListDestinationT>(value)); return *this;}
    ///@}
  private:

    SuppressionListDestination m_suppressionListDestination;
    bool m_suppressionListDestinationHasBeenSet = false;

    ContactListDestination m_contactListDestination;
    bool m_contactListDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
