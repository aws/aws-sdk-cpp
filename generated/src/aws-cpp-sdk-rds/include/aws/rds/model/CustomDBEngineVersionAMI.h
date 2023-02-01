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
   * <p>A value that indicates the AMI information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CustomDBEngineVersionAMI">AWS
   * API Reference</a></p>
   */
  class CustomDBEngineVersionAMI
  {
  public:
    AWS_RDS_API CustomDBEngineVersionAMI();
    AWS_RDS_API CustomDBEngineVersionAMI(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API CustomDBEngineVersionAMI& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A value that indicates the ID of the AMI.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>A value that indicates the ID of the AMI.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>A value that indicates the ID of the AMI.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>A value that indicates the ID of the AMI.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>A value that indicates the ID of the AMI.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>A value that indicates the ID of the AMI.</p>
     */
    inline CustomDBEngineVersionAMI& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>A value that indicates the ID of the AMI.</p>
     */
    inline CustomDBEngineVersionAMI& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the ID of the AMI.</p>
     */
    inline CustomDBEngineVersionAMI& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>A value that indicates the status of a custom engine version (CEV).</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>A value that indicates the status of a custom engine version (CEV).</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A value that indicates the status of a custom engine version (CEV).</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A value that indicates the status of a custom engine version (CEV).</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A value that indicates the status of a custom engine version (CEV).</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>A value that indicates the status of a custom engine version (CEV).</p>
     */
    inline CustomDBEngineVersionAMI& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>A value that indicates the status of a custom engine version (CEV).</p>
     */
    inline CustomDBEngineVersionAMI& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the status of a custom engine version (CEV).</p>
     */
    inline CustomDBEngineVersionAMI& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
