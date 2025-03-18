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
    AWS_S3CONTROL_API MultiRegionAccessPointRegionalResponse() = default;
    AWS_S3CONTROL_API MultiRegionAccessPointRegionalResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API MultiRegionAccessPointRegionalResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The name of the Region in the Multi-Region Access Point.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MultiRegionAccessPointRegionalResponse& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the Multi-Region Access Point in this Region.</p>
     */
    inline const Aws::String& GetRequestStatus() const { return m_requestStatus; }
    inline bool RequestStatusHasBeenSet() const { return m_requestStatusHasBeenSet; }
    template<typename RequestStatusT = Aws::String>
    void SetRequestStatus(RequestStatusT&& value) { m_requestStatusHasBeenSet = true; m_requestStatus = std::forward<RequestStatusT>(value); }
    template<typename RequestStatusT = Aws::String>
    MultiRegionAccessPointRegionalResponse& WithRequestStatus(RequestStatusT&& value) { SetRequestStatus(std::forward<RequestStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_requestStatus;
    bool m_requestStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
