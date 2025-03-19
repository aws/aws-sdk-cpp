/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/PendingMaintenanceAction.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Neptune
{
namespace Model
{

  /**
   * <p>Describes the pending maintenance actions for a resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ResourcePendingMaintenanceActions">AWS
   * API Reference</a></p>
   */
  class ResourcePendingMaintenanceActions
  {
  public:
    AWS_NEPTUNE_API ResourcePendingMaintenanceActions() = default;
    AWS_NEPTUNE_API ResourcePendingMaintenanceActions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API ResourcePendingMaintenanceActions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ARN of the resource that has pending maintenance actions.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    ResourcePendingMaintenanceActions& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list that provides details about the pending maintenance actions for the
     * resource.</p>
     */
    inline const Aws::Vector<PendingMaintenanceAction>& GetPendingMaintenanceActionDetails() const { return m_pendingMaintenanceActionDetails; }
    inline bool PendingMaintenanceActionDetailsHasBeenSet() const { return m_pendingMaintenanceActionDetailsHasBeenSet; }
    template<typename PendingMaintenanceActionDetailsT = Aws::Vector<PendingMaintenanceAction>>
    void SetPendingMaintenanceActionDetails(PendingMaintenanceActionDetailsT&& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails = std::forward<PendingMaintenanceActionDetailsT>(value); }
    template<typename PendingMaintenanceActionDetailsT = Aws::Vector<PendingMaintenanceAction>>
    ResourcePendingMaintenanceActions& WithPendingMaintenanceActionDetails(PendingMaintenanceActionDetailsT&& value) { SetPendingMaintenanceActionDetails(std::forward<PendingMaintenanceActionDetailsT>(value)); return *this;}
    template<typename PendingMaintenanceActionDetailsT = PendingMaintenanceAction>
    ResourcePendingMaintenanceActions& AddPendingMaintenanceActionDetails(PendingMaintenanceActionDetailsT&& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails.emplace_back(std::forward<PendingMaintenanceActionDetailsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::Vector<PendingMaintenanceAction> m_pendingMaintenanceActionDetails;
    bool m_pendingMaintenanceActionDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
