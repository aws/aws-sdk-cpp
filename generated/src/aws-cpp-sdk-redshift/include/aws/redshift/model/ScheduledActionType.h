/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/redshift/model/ResizeClusterMessage.h>
#include <aws/redshift/model/PauseClusterMessage.h>
#include <aws/redshift/model/ResumeClusterMessage.h>
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
   * <p>The action type that specifies an Amazon Redshift API operation that is
   * supported by the Amazon Redshift scheduler. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ScheduledActionType">AWS
   * API Reference</a></p>
   */
  class ScheduledActionType
  {
  public:
    AWS_REDSHIFT_API ScheduledActionType() = default;
    AWS_REDSHIFT_API ScheduledActionType(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ScheduledActionType& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>An action that runs a <code>ResizeCluster</code> API operation. </p>
     */
    inline const ResizeClusterMessage& GetResizeCluster() const { return m_resizeCluster; }
    inline bool ResizeClusterHasBeenSet() const { return m_resizeClusterHasBeenSet; }
    template<typename ResizeClusterT = ResizeClusterMessage>
    void SetResizeCluster(ResizeClusterT&& value) { m_resizeClusterHasBeenSet = true; m_resizeCluster = std::forward<ResizeClusterT>(value); }
    template<typename ResizeClusterT = ResizeClusterMessage>
    ScheduledActionType& WithResizeCluster(ResizeClusterT&& value) { SetResizeCluster(std::forward<ResizeClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An action that runs a <code>PauseCluster</code> API operation. </p>
     */
    inline const PauseClusterMessage& GetPauseCluster() const { return m_pauseCluster; }
    inline bool PauseClusterHasBeenSet() const { return m_pauseClusterHasBeenSet; }
    template<typename PauseClusterT = PauseClusterMessage>
    void SetPauseCluster(PauseClusterT&& value) { m_pauseClusterHasBeenSet = true; m_pauseCluster = std::forward<PauseClusterT>(value); }
    template<typename PauseClusterT = PauseClusterMessage>
    ScheduledActionType& WithPauseCluster(PauseClusterT&& value) { SetPauseCluster(std::forward<PauseClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An action that runs a <code>ResumeCluster</code> API operation. </p>
     */
    inline const ResumeClusterMessage& GetResumeCluster() const { return m_resumeCluster; }
    inline bool ResumeClusterHasBeenSet() const { return m_resumeClusterHasBeenSet; }
    template<typename ResumeClusterT = ResumeClusterMessage>
    void SetResumeCluster(ResumeClusterT&& value) { m_resumeClusterHasBeenSet = true; m_resumeCluster = std::forward<ResumeClusterT>(value); }
    template<typename ResumeClusterT = ResumeClusterMessage>
    ScheduledActionType& WithResumeCluster(ResumeClusterT&& value) { SetResumeCluster(std::forward<ResumeClusterT>(value)); return *this;}
    ///@}
  private:

    ResizeClusterMessage m_resizeCluster;
    bool m_resizeClusterHasBeenSet = false;

    PauseClusterMessage m_pauseCluster;
    bool m_pauseClusterHasBeenSet = false;

    ResumeClusterMessage m_resumeCluster;
    bool m_resumeClusterHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
