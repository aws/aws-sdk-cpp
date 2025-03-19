/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/snowball/model/S3Resource.h>
#include <aws/snowball/model/LambdaResource.h>
#include <aws/snowball/model/Ec2AmiResource.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Snowball
{
namespace Model
{

  /**
   * <p>Contains an array of Amazon Web Services resource objects. Each object
   * represents an Amazon S3 bucket, an Lambda function, or an Amazon Machine Image
   * (AMI) based on Amazon EC2 that is associated with a particular
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/JobResource">AWS
   * API Reference</a></p>
   */
  class JobResource
  {
  public:
    AWS_SNOWBALL_API JobResource() = default;
    AWS_SNOWBALL_API JobResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API JobResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of <code>S3Resource</code> objects.</p>
     */
    inline const Aws::Vector<S3Resource>& GetS3Resources() const { return m_s3Resources; }
    inline bool S3ResourcesHasBeenSet() const { return m_s3ResourcesHasBeenSet; }
    template<typename S3ResourcesT = Aws::Vector<S3Resource>>
    void SetS3Resources(S3ResourcesT&& value) { m_s3ResourcesHasBeenSet = true; m_s3Resources = std::forward<S3ResourcesT>(value); }
    template<typename S3ResourcesT = Aws::Vector<S3Resource>>
    JobResource& WithS3Resources(S3ResourcesT&& value) { SetS3Resources(std::forward<S3ResourcesT>(value)); return *this;}
    template<typename S3ResourcesT = S3Resource>
    JobResource& AddS3Resources(S3ResourcesT&& value) { m_s3ResourcesHasBeenSet = true; m_s3Resources.emplace_back(std::forward<S3ResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Python-language Lambda functions for this job.</p>
     */
    inline const Aws::Vector<LambdaResource>& GetLambdaResources() const { return m_lambdaResources; }
    inline bool LambdaResourcesHasBeenSet() const { return m_lambdaResourcesHasBeenSet; }
    template<typename LambdaResourcesT = Aws::Vector<LambdaResource>>
    void SetLambdaResources(LambdaResourcesT&& value) { m_lambdaResourcesHasBeenSet = true; m_lambdaResources = std::forward<LambdaResourcesT>(value); }
    template<typename LambdaResourcesT = Aws::Vector<LambdaResource>>
    JobResource& WithLambdaResources(LambdaResourcesT&& value) { SetLambdaResources(std::forward<LambdaResourcesT>(value)); return *this;}
    template<typename LambdaResourcesT = LambdaResource>
    JobResource& AddLambdaResources(LambdaResourcesT&& value) { m_lambdaResourcesHasBeenSet = true; m_lambdaResources.emplace_back(std::forward<LambdaResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Machine Images (AMIs) associated with this job.</p>
     */
    inline const Aws::Vector<Ec2AmiResource>& GetEc2AmiResources() const { return m_ec2AmiResources; }
    inline bool Ec2AmiResourcesHasBeenSet() const { return m_ec2AmiResourcesHasBeenSet; }
    template<typename Ec2AmiResourcesT = Aws::Vector<Ec2AmiResource>>
    void SetEc2AmiResources(Ec2AmiResourcesT&& value) { m_ec2AmiResourcesHasBeenSet = true; m_ec2AmiResources = std::forward<Ec2AmiResourcesT>(value); }
    template<typename Ec2AmiResourcesT = Aws::Vector<Ec2AmiResource>>
    JobResource& WithEc2AmiResources(Ec2AmiResourcesT&& value) { SetEc2AmiResources(std::forward<Ec2AmiResourcesT>(value)); return *this;}
    template<typename Ec2AmiResourcesT = Ec2AmiResource>
    JobResource& AddEc2AmiResources(Ec2AmiResourcesT&& value) { m_ec2AmiResourcesHasBeenSet = true; m_ec2AmiResources.emplace_back(std::forward<Ec2AmiResourcesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<S3Resource> m_s3Resources;
    bool m_s3ResourcesHasBeenSet = false;

    Aws::Vector<LambdaResource> m_lambdaResources;
    bool m_lambdaResourcesHasBeenSet = false;

    Aws::Vector<Ec2AmiResource> m_ec2AmiResources;
    bool m_ec2AmiResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
