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
    AWS_NEPTUNE_API ResourcePendingMaintenanceActions();
    AWS_NEPTUNE_API ResourcePendingMaintenanceActions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API ResourcePendingMaintenanceActions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ARN of the resource that has pending maintenance actions.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }
    inline ResourcePendingMaintenanceActions& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}
    inline ResourcePendingMaintenanceActions& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}
    inline ResourcePendingMaintenanceActions& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list that provides details about the pending maintenance actions for the
     * resource.</p>
     */
    inline const Aws::Vector<PendingMaintenanceAction>& GetPendingMaintenanceActionDetails() const{ return m_pendingMaintenanceActionDetails; }
    inline bool PendingMaintenanceActionDetailsHasBeenSet() const { return m_pendingMaintenanceActionDetailsHasBeenSet; }
    inline void SetPendingMaintenanceActionDetails(const Aws::Vector<PendingMaintenanceAction>& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails = value; }
    inline void SetPendingMaintenanceActionDetails(Aws::Vector<PendingMaintenanceAction>&& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails = std::move(value); }
    inline ResourcePendingMaintenanceActions& WithPendingMaintenanceActionDetails(const Aws::Vector<PendingMaintenanceAction>& value) { SetPendingMaintenanceActionDetails(value); return *this;}
    inline ResourcePendingMaintenanceActions& WithPendingMaintenanceActionDetails(Aws::Vector<PendingMaintenanceAction>&& value) { SetPendingMaintenanceActionDetails(std::move(value)); return *this;}
    inline ResourcePendingMaintenanceActions& AddPendingMaintenanceActionDetails(const PendingMaintenanceAction& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails.push_back(value); return *this; }
    inline ResourcePendingMaintenanceActions& AddPendingMaintenanceActionDetails(PendingMaintenanceAction&& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails.push_back(std::move(value)); return *this; }
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
