/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/model/S3Source.h>
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
namespace signer
{
namespace Model
{

  /**
   * <p>An <code>S3Source</code> object that contains information about the S3 bucket
   * where you saved your unsigned code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/Source">AWS API
   * Reference</a></p>
   */
  class Source
  {
  public:
    AWS_SIGNER_API Source() = default;
    AWS_SIGNER_API Source(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Source& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>S3Source</code> object.</p>
     */
    inline const S3Source& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = S3Source>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = S3Source>
    Source& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}
  private:

    S3Source m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
