/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/MultiRegionAccessPointsAsyncResponse.h>
#include <aws/s3control/model/AsyncErrorDetails.h>
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
   * <p>A container for the response details that are returned when querying about an
   * asynchronous request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/AsyncResponseDetails">AWS
   * API Reference</a></p>
   */
  class AsyncResponseDetails
  {
  public:
    AWS_S3CONTROL_API AsyncResponseDetails() = default;
    AWS_S3CONTROL_API AsyncResponseDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API AsyncResponseDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The details for the Multi-Region Access Point.</p>
     */
    inline const MultiRegionAccessPointsAsyncResponse& GetMultiRegionAccessPointDetails() const { return m_multiRegionAccessPointDetails; }
    inline bool MultiRegionAccessPointDetailsHasBeenSet() const { return m_multiRegionAccessPointDetailsHasBeenSet; }
    template<typename MultiRegionAccessPointDetailsT = MultiRegionAccessPointsAsyncResponse>
    void SetMultiRegionAccessPointDetails(MultiRegionAccessPointDetailsT&& value) { m_multiRegionAccessPointDetailsHasBeenSet = true; m_multiRegionAccessPointDetails = std::forward<MultiRegionAccessPointDetailsT>(value); }
    template<typename MultiRegionAccessPointDetailsT = MultiRegionAccessPointsAsyncResponse>
    AsyncResponseDetails& WithMultiRegionAccessPointDetails(MultiRegionAccessPointDetailsT&& value) { SetMultiRegionAccessPointDetails(std::forward<MultiRegionAccessPointDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error details for an asynchronous request.</p>
     */
    inline const AsyncErrorDetails& GetErrorDetails() const { return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    template<typename ErrorDetailsT = AsyncErrorDetails>
    void SetErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::forward<ErrorDetailsT>(value); }
    template<typename ErrorDetailsT = AsyncErrorDetails>
    AsyncResponseDetails& WithErrorDetails(ErrorDetailsT&& value) { SetErrorDetails(std::forward<ErrorDetailsT>(value)); return *this;}
    ///@}
  private:

    MultiRegionAccessPointsAsyncResponse m_multiRegionAccessPointDetails;
    bool m_multiRegionAccessPointDetailsHasBeenSet = false;

    AsyncErrorDetails m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
