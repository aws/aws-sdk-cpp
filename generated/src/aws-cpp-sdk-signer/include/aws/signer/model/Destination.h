/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/model/S3Destination.h>
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
   * <p>Points to an <code>S3Destination</code> object that contains information
   * about your S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/Destination">AWS
   * API Reference</a></p>
   */
  class Destination
  {
  public:
    AWS_SIGNER_API Destination();
    AWS_SIGNER_API Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>S3Destination</code> object.</p>
     */
    inline const S3Destination& GetS3() const{ return m_s3; }

    /**
     * <p>The <code>S3Destination</code> object.</p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p>The <code>S3Destination</code> object.</p>
     */
    inline void SetS3(const S3Destination& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>The <code>S3Destination</code> object.</p>
     */
    inline void SetS3(S3Destination&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>The <code>S3Destination</code> object.</p>
     */
    inline Destination& WithS3(const S3Destination& value) { SetS3(value); return *this;}

    /**
     * <p>The <code>S3Destination</code> object.</p>
     */
    inline Destination& WithS3(S3Destination&& value) { SetS3(std::move(value)); return *this;}

  private:

    S3Destination m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
