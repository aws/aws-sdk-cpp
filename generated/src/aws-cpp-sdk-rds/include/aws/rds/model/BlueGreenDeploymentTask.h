/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>Contains the details about a task for a blue/green deployment.</p> <p>For
   * more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/blue-green-deployments.html">Using
   * Amazon RDS Blue/Green Deployments for database updates</a> in the <i>Amazon RDS
   * User Guide</i> and <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/blue-green-deployments.html">
   * Using Amazon RDS Blue/Green Deployments for database updates</a> in the
   * <i>Amazon Aurora User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/BlueGreenDeploymentTask">AWS
   * API Reference</a></p>
   */
  class BlueGreenDeploymentTask
  {
  public:
    AWS_RDS_API BlueGreenDeploymentTask();
    AWS_RDS_API BlueGreenDeploymentTask(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API BlueGreenDeploymentTask& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the blue/green deployment task.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the blue/green deployment task.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the blue/green deployment task.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the blue/green deployment task.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the blue/green deployment task.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the blue/green deployment task.</p>
     */
    inline BlueGreenDeploymentTask& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the blue/green deployment task.</p>
     */
    inline BlueGreenDeploymentTask& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the blue/green deployment task.</p>
     */
    inline BlueGreenDeploymentTask& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the blue/green deployment task.</p> <p>Values:</p> <ul> <li>
     * <p> <code>PENDING</code> - The resources are being prepared for deployment.</p>
     * </li> <li> <p> <code>IN_PROGRESS</code> - The resource is being deployed.</p>
     * </li> <li> <p> <code>COMPLETED</code> - The resource has been deployed.</p>
     * </li> <li> <p> <code>FAILED</code> - Deployment of the resource failed.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the blue/green deployment task.</p> <p>Values:</p> <ul> <li>
     * <p> <code>PENDING</code> - The resources are being prepared for deployment.</p>
     * </li> <li> <p> <code>IN_PROGRESS</code> - The resource is being deployed.</p>
     * </li> <li> <p> <code>COMPLETED</code> - The resource has been deployed.</p>
     * </li> <li> <p> <code>FAILED</code> - Deployment of the resource failed.</p>
     * </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the blue/green deployment task.</p> <p>Values:</p> <ul> <li>
     * <p> <code>PENDING</code> - The resources are being prepared for deployment.</p>
     * </li> <li> <p> <code>IN_PROGRESS</code> - The resource is being deployed.</p>
     * </li> <li> <p> <code>COMPLETED</code> - The resource has been deployed.</p>
     * </li> <li> <p> <code>FAILED</code> - Deployment of the resource failed.</p>
     * </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the blue/green deployment task.</p> <p>Values:</p> <ul> <li>
     * <p> <code>PENDING</code> - The resources are being prepared for deployment.</p>
     * </li> <li> <p> <code>IN_PROGRESS</code> - The resource is being deployed.</p>
     * </li> <li> <p> <code>COMPLETED</code> - The resource has been deployed.</p>
     * </li> <li> <p> <code>FAILED</code> - Deployment of the resource failed.</p>
     * </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the blue/green deployment task.</p> <p>Values:</p> <ul> <li>
     * <p> <code>PENDING</code> - The resources are being prepared for deployment.</p>
     * </li> <li> <p> <code>IN_PROGRESS</code> - The resource is being deployed.</p>
     * </li> <li> <p> <code>COMPLETED</code> - The resource has been deployed.</p>
     * </li> <li> <p> <code>FAILED</code> - Deployment of the resource failed.</p>
     * </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the blue/green deployment task.</p> <p>Values:</p> <ul> <li>
     * <p> <code>PENDING</code> - The resources are being prepared for deployment.</p>
     * </li> <li> <p> <code>IN_PROGRESS</code> - The resource is being deployed.</p>
     * </li> <li> <p> <code>COMPLETED</code> - The resource has been deployed.</p>
     * </li> <li> <p> <code>FAILED</code> - Deployment of the resource failed.</p>
     * </li> </ul>
     */
    inline BlueGreenDeploymentTask& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the blue/green deployment task.</p> <p>Values:</p> <ul> <li>
     * <p> <code>PENDING</code> - The resources are being prepared for deployment.</p>
     * </li> <li> <p> <code>IN_PROGRESS</code> - The resource is being deployed.</p>
     * </li> <li> <p> <code>COMPLETED</code> - The resource has been deployed.</p>
     * </li> <li> <p> <code>FAILED</code> - Deployment of the resource failed.</p>
     * </li> </ul>
     */
    inline BlueGreenDeploymentTask& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the blue/green deployment task.</p> <p>Values:</p> <ul> <li>
     * <p> <code>PENDING</code> - The resources are being prepared for deployment.</p>
     * </li> <li> <p> <code>IN_PROGRESS</code> - The resource is being deployed.</p>
     * </li> <li> <p> <code>COMPLETED</code> - The resource has been deployed.</p>
     * </li> <li> <p> <code>FAILED</code> - Deployment of the resource failed.</p>
     * </li> </ul>
     */
    inline BlueGreenDeploymentTask& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
