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
    AWS_REDSHIFT_API ScheduledActionType();
    AWS_REDSHIFT_API ScheduledActionType(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ScheduledActionType& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>An action that runs a <code>ResizeCluster</code> API operation. </p>
     */
    inline const ResizeClusterMessage& GetResizeCluster() const{ return m_resizeCluster; }

    /**
     * <p>An action that runs a <code>ResizeCluster</code> API operation. </p>
     */
    inline bool ResizeClusterHasBeenSet() const { return m_resizeClusterHasBeenSet; }

    /**
     * <p>An action that runs a <code>ResizeCluster</code> API operation. </p>
     */
    inline void SetResizeCluster(const ResizeClusterMessage& value) { m_resizeClusterHasBeenSet = true; m_resizeCluster = value; }

    /**
     * <p>An action that runs a <code>ResizeCluster</code> API operation. </p>
     */
    inline void SetResizeCluster(ResizeClusterMessage&& value) { m_resizeClusterHasBeenSet = true; m_resizeCluster = std::move(value); }

    /**
     * <p>An action that runs a <code>ResizeCluster</code> API operation. </p>
     */
    inline ScheduledActionType& WithResizeCluster(const ResizeClusterMessage& value) { SetResizeCluster(value); return *this;}

    /**
     * <p>An action that runs a <code>ResizeCluster</code> API operation. </p>
     */
    inline ScheduledActionType& WithResizeCluster(ResizeClusterMessage&& value) { SetResizeCluster(std::move(value)); return *this;}


    /**
     * <p>An action that runs a <code>PauseCluster</code> API operation. </p>
     */
    inline const PauseClusterMessage& GetPauseCluster() const{ return m_pauseCluster; }

    /**
     * <p>An action that runs a <code>PauseCluster</code> API operation. </p>
     */
    inline bool PauseClusterHasBeenSet() const { return m_pauseClusterHasBeenSet; }

    /**
     * <p>An action that runs a <code>PauseCluster</code> API operation. </p>
     */
    inline void SetPauseCluster(const PauseClusterMessage& value) { m_pauseClusterHasBeenSet = true; m_pauseCluster = value; }

    /**
     * <p>An action that runs a <code>PauseCluster</code> API operation. </p>
     */
    inline void SetPauseCluster(PauseClusterMessage&& value) { m_pauseClusterHasBeenSet = true; m_pauseCluster = std::move(value); }

    /**
     * <p>An action that runs a <code>PauseCluster</code> API operation. </p>
     */
    inline ScheduledActionType& WithPauseCluster(const PauseClusterMessage& value) { SetPauseCluster(value); return *this;}

    /**
     * <p>An action that runs a <code>PauseCluster</code> API operation. </p>
     */
    inline ScheduledActionType& WithPauseCluster(PauseClusterMessage&& value) { SetPauseCluster(std::move(value)); return *this;}


    /**
     * <p>An action that runs a <code>ResumeCluster</code> API operation. </p>
     */
    inline const ResumeClusterMessage& GetResumeCluster() const{ return m_resumeCluster; }

    /**
     * <p>An action that runs a <code>ResumeCluster</code> API operation. </p>
     */
    inline bool ResumeClusterHasBeenSet() const { return m_resumeClusterHasBeenSet; }

    /**
     * <p>An action that runs a <code>ResumeCluster</code> API operation. </p>
     */
    inline void SetResumeCluster(const ResumeClusterMessage& value) { m_resumeClusterHasBeenSet = true; m_resumeCluster = value; }

    /**
     * <p>An action that runs a <code>ResumeCluster</code> API operation. </p>
     */
    inline void SetResumeCluster(ResumeClusterMessage&& value) { m_resumeClusterHasBeenSet = true; m_resumeCluster = std::move(value); }

    /**
     * <p>An action that runs a <code>ResumeCluster</code> API operation. </p>
     */
    inline ScheduledActionType& WithResumeCluster(const ResumeClusterMessage& value) { SetResumeCluster(value); return *this;}

    /**
     * <p>An action that runs a <code>ResumeCluster</code> API operation. </p>
     */
    inline ScheduledActionType& WithResumeCluster(ResumeClusterMessage&& value) { SetResumeCluster(std::move(value)); return *this;}

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
