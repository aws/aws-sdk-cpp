/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/CreateMultiRegionAccessPointInput.h>
#include <aws/s3control/model/DeleteMultiRegionAccessPointInput.h>
#include <aws/s3control/model/PutMultiRegionAccessPointPolicyInput.h>
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
   * <p>A container for the request parameters associated with an asynchronous
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/AsyncRequestParameters">AWS
   * API Reference</a></p>
   */
  class AsyncRequestParameters
  {
  public:
    AWS_S3CONTROL_API AsyncRequestParameters();
    AWS_S3CONTROL_API AsyncRequestParameters(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API AsyncRequestParameters& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A container of the parameters for a <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateMultiRegionAccessPoint.html">CreateMultiRegionAccessPoint</a>
     * request.</p>
     */
    inline const CreateMultiRegionAccessPointInput& GetCreateMultiRegionAccessPointRequest() const{ return m_createMultiRegionAccessPointRequest; }
    inline bool CreateMultiRegionAccessPointRequestHasBeenSet() const { return m_createMultiRegionAccessPointRequestHasBeenSet; }
    inline void SetCreateMultiRegionAccessPointRequest(const CreateMultiRegionAccessPointInput& value) { m_createMultiRegionAccessPointRequestHasBeenSet = true; m_createMultiRegionAccessPointRequest = value; }
    inline void SetCreateMultiRegionAccessPointRequest(CreateMultiRegionAccessPointInput&& value) { m_createMultiRegionAccessPointRequestHasBeenSet = true; m_createMultiRegionAccessPointRequest = std::move(value); }
    inline AsyncRequestParameters& WithCreateMultiRegionAccessPointRequest(const CreateMultiRegionAccessPointInput& value) { SetCreateMultiRegionAccessPointRequest(value); return *this;}
    inline AsyncRequestParameters& WithCreateMultiRegionAccessPointRequest(CreateMultiRegionAccessPointInput&& value) { SetCreateMultiRegionAccessPointRequest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container of the parameters for a <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteMultiRegionAccessPoint.html">DeleteMultiRegionAccessPoint</a>
     * request.</p>
     */
    inline const DeleteMultiRegionAccessPointInput& GetDeleteMultiRegionAccessPointRequest() const{ return m_deleteMultiRegionAccessPointRequest; }
    inline bool DeleteMultiRegionAccessPointRequestHasBeenSet() const { return m_deleteMultiRegionAccessPointRequestHasBeenSet; }
    inline void SetDeleteMultiRegionAccessPointRequest(const DeleteMultiRegionAccessPointInput& value) { m_deleteMultiRegionAccessPointRequestHasBeenSet = true; m_deleteMultiRegionAccessPointRequest = value; }
    inline void SetDeleteMultiRegionAccessPointRequest(DeleteMultiRegionAccessPointInput&& value) { m_deleteMultiRegionAccessPointRequestHasBeenSet = true; m_deleteMultiRegionAccessPointRequest = std::move(value); }
    inline AsyncRequestParameters& WithDeleteMultiRegionAccessPointRequest(const DeleteMultiRegionAccessPointInput& value) { SetDeleteMultiRegionAccessPointRequest(value); return *this;}
    inline AsyncRequestParameters& WithDeleteMultiRegionAccessPointRequest(DeleteMultiRegionAccessPointInput&& value) { SetDeleteMultiRegionAccessPointRequest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container of the parameters for a <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutMultiRegionAccessPoint.html">PutMultiRegionAccessPoint</a>
     * request.</p>
     */
    inline const PutMultiRegionAccessPointPolicyInput& GetPutMultiRegionAccessPointPolicyRequest() const{ return m_putMultiRegionAccessPointPolicyRequest; }
    inline bool PutMultiRegionAccessPointPolicyRequestHasBeenSet() const { return m_putMultiRegionAccessPointPolicyRequestHasBeenSet; }
    inline void SetPutMultiRegionAccessPointPolicyRequest(const PutMultiRegionAccessPointPolicyInput& value) { m_putMultiRegionAccessPointPolicyRequestHasBeenSet = true; m_putMultiRegionAccessPointPolicyRequest = value; }
    inline void SetPutMultiRegionAccessPointPolicyRequest(PutMultiRegionAccessPointPolicyInput&& value) { m_putMultiRegionAccessPointPolicyRequestHasBeenSet = true; m_putMultiRegionAccessPointPolicyRequest = std::move(value); }
    inline AsyncRequestParameters& WithPutMultiRegionAccessPointPolicyRequest(const PutMultiRegionAccessPointPolicyInput& value) { SetPutMultiRegionAccessPointPolicyRequest(value); return *this;}
    inline AsyncRequestParameters& WithPutMultiRegionAccessPointPolicyRequest(PutMultiRegionAccessPointPolicyInput&& value) { SetPutMultiRegionAccessPointPolicyRequest(std::move(value)); return *this;}
    ///@}
  private:

    CreateMultiRegionAccessPointInput m_createMultiRegionAccessPointRequest;
    bool m_createMultiRegionAccessPointRequestHasBeenSet = false;

    DeleteMultiRegionAccessPointInput m_deleteMultiRegionAccessPointRequest;
    bool m_deleteMultiRegionAccessPointRequestHasBeenSet = false;

    PutMultiRegionAccessPointPolicyInput m_putMultiRegionAccessPointPolicyRequest;
    bool m_putMultiRegionAccessPointPolicyRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
