/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ScheduleState.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterAssociatedToSchedule">AWS
   * API Reference</a></p>
   */
  class ClusterAssociatedToSchedule
  {
  public:
    AWS_REDSHIFT_API ClusterAssociatedToSchedule() = default;
    AWS_REDSHIFT_API ClusterAssociatedToSchedule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ClusterAssociatedToSchedule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    ClusterAssociatedToSchedule& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline ScheduleState GetScheduleAssociationState() const { return m_scheduleAssociationState; }
    inline bool ScheduleAssociationStateHasBeenSet() const { return m_scheduleAssociationStateHasBeenSet; }
    inline void SetScheduleAssociationState(ScheduleState value) { m_scheduleAssociationStateHasBeenSet = true; m_scheduleAssociationState = value; }
    inline ClusterAssociatedToSchedule& WithScheduleAssociationState(ScheduleState value) { SetScheduleAssociationState(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    ScheduleState m_scheduleAssociationState{ScheduleState::NOT_SET};
    bool m_scheduleAssociationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
