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
    AWS_REDSHIFT_API ClusterAssociatedToSchedule();
    AWS_REDSHIFT_API ClusterAssociatedToSchedule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ClusterAssociatedToSchedule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p/>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p/>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p/>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p/>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p/>
     */
    inline ClusterAssociatedToSchedule& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p/>
     */
    inline ClusterAssociatedToSchedule& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ClusterAssociatedToSchedule& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p/>
     */
    inline const ScheduleState& GetScheduleAssociationState() const{ return m_scheduleAssociationState; }

    /**
     * <p/>
     */
    inline bool ScheduleAssociationStateHasBeenSet() const { return m_scheduleAssociationStateHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetScheduleAssociationState(const ScheduleState& value) { m_scheduleAssociationStateHasBeenSet = true; m_scheduleAssociationState = value; }

    /**
     * <p/>
     */
    inline void SetScheduleAssociationState(ScheduleState&& value) { m_scheduleAssociationStateHasBeenSet = true; m_scheduleAssociationState = std::move(value); }

    /**
     * <p/>
     */
    inline ClusterAssociatedToSchedule& WithScheduleAssociationState(const ScheduleState& value) { SetScheduleAssociationState(value); return *this;}

    /**
     * <p/>
     */
    inline ClusterAssociatedToSchedule& WithScheduleAssociationState(ScheduleState&& value) { SetScheduleAssociationState(std::move(value)); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    ScheduleState m_scheduleAssociationState;
    bool m_scheduleAssociationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
