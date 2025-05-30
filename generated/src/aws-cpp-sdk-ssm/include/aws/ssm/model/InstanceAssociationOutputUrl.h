﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/S3OutputUrl.h>
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
   * <p>The URL of S3 bucket where you want to store the results of this
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstanceAssociationOutputUrl">AWS
   * API Reference</a></p>
   */
  class InstanceAssociationOutputUrl
  {
  public:
    AWS_SSM_API InstanceAssociationOutputUrl() = default;
    AWS_SSM_API InstanceAssociationOutputUrl(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstanceAssociationOutputUrl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL of S3 bucket where you want to store the results of this request.</p>
     */
    inline const S3OutputUrl& GetS3OutputUrl() const { return m_s3OutputUrl; }
    inline bool S3OutputUrlHasBeenSet() const { return m_s3OutputUrlHasBeenSet; }
    template<typename S3OutputUrlT = S3OutputUrl>
    void SetS3OutputUrl(S3OutputUrlT&& value) { m_s3OutputUrlHasBeenSet = true; m_s3OutputUrl = std::forward<S3OutputUrlT>(value); }
    template<typename S3OutputUrlT = S3OutputUrl>
    InstanceAssociationOutputUrl& WithS3OutputUrl(S3OutputUrlT&& value) { SetS3OutputUrl(std::forward<S3OutputUrlT>(value)); return *this;}
    ///@}
  private:

    S3OutputUrl m_s3OutputUrl;
    bool m_s3OutputUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
