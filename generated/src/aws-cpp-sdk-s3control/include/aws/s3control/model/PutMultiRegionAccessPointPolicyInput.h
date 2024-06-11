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
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutMultiRegionAccessPoint.html">PutMultiRegionAccessPoint</a>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutMultiRegionAccessPointPolicyInput">AWS
   * API Reference</a></p>
   */
  class PutMultiRegionAccessPointPolicyInput
  {
  public:
    AWS_S3CONTROL_API PutMultiRegionAccessPointPolicyInput();
    AWS_S3CONTROL_API PutMultiRegionAccessPointPolicyInput(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API PutMultiRegionAccessPointPolicyInput& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The name of the Multi-Region Access Point associated with the request.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PutMultiRegionAccessPointPolicyInput& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PutMultiRegionAccessPointPolicyInput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PutMultiRegionAccessPointPolicyInput& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy details for the <code>PutMultiRegionAccessPoint</code>
     * request.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }
    inline PutMultiRegionAccessPointPolicyInput& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline PutMultiRegionAccessPointPolicyInput& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline PutMultiRegionAccessPointPolicyInput& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
