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
   * <p>The recommended status to update for the specified recommendation action
   * ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RecommendedActionUpdate">AWS
   * API Reference</a></p>
   */
  class RecommendedActionUpdate
  {
  public:
    AWS_RDS_API RecommendedActionUpdate();
    AWS_RDS_API RecommendedActionUpdate(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API RecommendedActionUpdate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A unique identifier of the updated recommendation action.</p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }

    /**
     * <p>A unique identifier of the updated recommendation action.</p>
     */
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }

    /**
     * <p>A unique identifier of the updated recommendation action.</p>
     */
    inline void SetActionId(const Aws::String& value) { m_actionIdHasBeenSet = true; m_actionId = value; }

    /**
     * <p>A unique identifier of the updated recommendation action.</p>
     */
    inline void SetActionId(Aws::String&& value) { m_actionIdHasBeenSet = true; m_actionId = std::move(value); }

    /**
     * <p>A unique identifier of the updated recommendation action.</p>
     */
    inline void SetActionId(const char* value) { m_actionIdHasBeenSet = true; m_actionId.assign(value); }

    /**
     * <p>A unique identifier of the updated recommendation action.</p>
     */
    inline RecommendedActionUpdate& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}

    /**
     * <p>A unique identifier of the updated recommendation action.</p>
     */
    inline RecommendedActionUpdate& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of the updated recommendation action.</p>
     */
    inline RecommendedActionUpdate& WithActionId(const char* value) { SetActionId(value); return *this;}


    /**
     * <p>The status of the updated recommendation action.</p> <ul> <li> <p>
     * <code>applied</code> </p> </li> <li> <p> <code>scheduled</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the updated recommendation action.</p> <ul> <li> <p>
     * <code>applied</code> </p> </li> <li> <p> <code>scheduled</code> </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the updated recommendation action.</p> <ul> <li> <p>
     * <code>applied</code> </p> </li> <li> <p> <code>scheduled</code> </p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the updated recommendation action.</p> <ul> <li> <p>
     * <code>applied</code> </p> </li> <li> <p> <code>scheduled</code> </p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the updated recommendation action.</p> <ul> <li> <p>
     * <code>applied</code> </p> </li> <li> <p> <code>scheduled</code> </p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the updated recommendation action.</p> <ul> <li> <p>
     * <code>applied</code> </p> </li> <li> <p> <code>scheduled</code> </p> </li> </ul>
     */
    inline RecommendedActionUpdate& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the updated recommendation action.</p> <ul> <li> <p>
     * <code>applied</code> </p> </li> <li> <p> <code>scheduled</code> </p> </li> </ul>
     */
    inline RecommendedActionUpdate& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the updated recommendation action.</p> <ul> <li> <p>
     * <code>applied</code> </p> </li> <li> <p> <code>scheduled</code> </p> </li> </ul>
     */
    inline RecommendedActionUpdate& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
