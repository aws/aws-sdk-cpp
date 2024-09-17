/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/S3OutputLocation.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>An S3 bucket where you want to store the results of this request.</p> <p>For
   * the minimal permissions required to enable Amazon S3 output for an association,
   * see <a
   * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/state-manager-associations-creating.html#state-manager-associations-console">Create
   * an association (console)</a> in the <i>Systems Manager User Guide</i>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstanceAssociationOutputLocation">AWS
   * API Reference</a></p>
   */
  class InstanceAssociationOutputLocation
  {
  public:
    AWS_SSM_API InstanceAssociationOutputLocation();
    AWS_SSM_API InstanceAssociationOutputLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstanceAssociationOutputLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An S3 bucket where you want to store the results of this request.</p>
     */
    inline const S3OutputLocation& GetS3Location() const{ return m_s3Location; }
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
    inline void SetS3Location(const S3OutputLocation& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }
    inline void SetS3Location(S3OutputLocation&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }
    inline InstanceAssociationOutputLocation& WithS3Location(const S3OutputLocation& value) { SetS3Location(value); return *this;}
    inline InstanceAssociationOutputLocation& WithS3Location(S3OutputLocation&& value) { SetS3Location(std::move(value)); return *this;}
    ///@}
  private:

    S3OutputLocation m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
