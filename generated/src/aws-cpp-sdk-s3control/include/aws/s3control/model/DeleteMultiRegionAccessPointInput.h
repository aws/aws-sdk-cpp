/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p>A container for the information associated with a <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteMultiRegionAccessPoint.html">DeleteMultiRegionAccessPoint</a>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteMultiRegionAccessPointInput">AWS
   * API Reference</a></p>
   */
  class DeleteMultiRegionAccessPointInput
  {
  public:
    AWS_S3CONTROL_API DeleteMultiRegionAccessPointInput();
    AWS_S3CONTROL_API DeleteMultiRegionAccessPointInput(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API DeleteMultiRegionAccessPointInput& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The name of the Multi-Region Access Point associated with this request.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Multi-Region Access Point associated with this request.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Multi-Region Access Point associated with this request.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Multi-Region Access Point associated with this request.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Multi-Region Access Point associated with this request.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Multi-Region Access Point associated with this request.</p>
     */
    inline DeleteMultiRegionAccessPointInput& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Multi-Region Access Point associated with this request.</p>
     */
    inline DeleteMultiRegionAccessPointInput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Multi-Region Access Point associated with this request.</p>
     */
    inline DeleteMultiRegionAccessPointInput& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
