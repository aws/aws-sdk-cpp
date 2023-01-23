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
   * <p>Status information for a single Multi-Region Access Point
   * Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/MultiRegionAccessPointRegionalResponse">AWS
   * API Reference</a></p>
   */
  class MultiRegionAccessPointRegionalResponse
  {
  public:
    AWS_S3CONTROL_API MultiRegionAccessPointRegionalResponse();
    AWS_S3CONTROL_API MultiRegionAccessPointRegionalResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API MultiRegionAccessPointRegionalResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The name of the Region in the Multi-Region Access Point.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Region in the Multi-Region Access Point.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Region in the Multi-Region Access Point.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Region in the Multi-Region Access Point.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Region in the Multi-Region Access Point.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Region in the Multi-Region Access Point.</p>
     */
    inline MultiRegionAccessPointRegionalResponse& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Region in the Multi-Region Access Point.</p>
     */
    inline MultiRegionAccessPointRegionalResponse& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Region in the Multi-Region Access Point.</p>
     */
    inline MultiRegionAccessPointRegionalResponse& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current status of the Multi-Region Access Point in this Region.</p>
     */
    inline const Aws::String& GetRequestStatus() const{ return m_requestStatus; }

    /**
     * <p>The current status of the Multi-Region Access Point in this Region.</p>
     */
    inline bool RequestStatusHasBeenSet() const { return m_requestStatusHasBeenSet; }

    /**
     * <p>The current status of the Multi-Region Access Point in this Region.</p>
     */
    inline void SetRequestStatus(const Aws::String& value) { m_requestStatusHasBeenSet = true; m_requestStatus = value; }

    /**
     * <p>The current status of the Multi-Region Access Point in this Region.</p>
     */
    inline void SetRequestStatus(Aws::String&& value) { m_requestStatusHasBeenSet = true; m_requestStatus = std::move(value); }

    /**
     * <p>The current status of the Multi-Region Access Point in this Region.</p>
     */
    inline void SetRequestStatus(const char* value) { m_requestStatusHasBeenSet = true; m_requestStatus.assign(value); }

    /**
     * <p>The current status of the Multi-Region Access Point in this Region.</p>
     */
    inline MultiRegionAccessPointRegionalResponse& WithRequestStatus(const Aws::String& value) { SetRequestStatus(value); return *this;}

    /**
     * <p>The current status of the Multi-Region Access Point in this Region.</p>
     */
    inline MultiRegionAccessPointRegionalResponse& WithRequestStatus(Aws::String&& value) { SetRequestStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the Multi-Region Access Point in this Region.</p>
     */
    inline MultiRegionAccessPointRegionalResponse& WithRequestStatus(const char* value) { SetRequestStatus(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_requestStatus;
    bool m_requestStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
