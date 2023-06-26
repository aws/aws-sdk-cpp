/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/InputPolicy.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * A policy configures behavior that you allow or disallow for your account. For
   * information about MediaConvert policies, see the user guide at
   * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Policy">AWS
   * API Reference</a></p>
   */
  class Policy
  {
  public:
    AWS_MEDIACONVERT_API Policy();
    AWS_MEDIACONVERT_API Policy(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Policy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Allow or disallow jobs that specify HTTP inputs.
     */
    inline const InputPolicy& GetHttpInputs() const{ return m_httpInputs; }

    /**
     * Allow or disallow jobs that specify HTTP inputs.
     */
    inline bool HttpInputsHasBeenSet() const { return m_httpInputsHasBeenSet; }

    /**
     * Allow or disallow jobs that specify HTTP inputs.
     */
    inline void SetHttpInputs(const InputPolicy& value) { m_httpInputsHasBeenSet = true; m_httpInputs = value; }

    /**
     * Allow or disallow jobs that specify HTTP inputs.
     */
    inline void SetHttpInputs(InputPolicy&& value) { m_httpInputsHasBeenSet = true; m_httpInputs = std::move(value); }

    /**
     * Allow or disallow jobs that specify HTTP inputs.
     */
    inline Policy& WithHttpInputs(const InputPolicy& value) { SetHttpInputs(value); return *this;}

    /**
     * Allow or disallow jobs that specify HTTP inputs.
     */
    inline Policy& WithHttpInputs(InputPolicy&& value) { SetHttpInputs(std::move(value)); return *this;}


    /**
     * Allow or disallow jobs that specify HTTPS inputs.
     */
    inline const InputPolicy& GetHttpsInputs() const{ return m_httpsInputs; }

    /**
     * Allow or disallow jobs that specify HTTPS inputs.
     */
    inline bool HttpsInputsHasBeenSet() const { return m_httpsInputsHasBeenSet; }

    /**
     * Allow or disallow jobs that specify HTTPS inputs.
     */
    inline void SetHttpsInputs(const InputPolicy& value) { m_httpsInputsHasBeenSet = true; m_httpsInputs = value; }

    /**
     * Allow or disallow jobs that specify HTTPS inputs.
     */
    inline void SetHttpsInputs(InputPolicy&& value) { m_httpsInputsHasBeenSet = true; m_httpsInputs = std::move(value); }

    /**
     * Allow or disallow jobs that specify HTTPS inputs.
     */
    inline Policy& WithHttpsInputs(const InputPolicy& value) { SetHttpsInputs(value); return *this;}

    /**
     * Allow or disallow jobs that specify HTTPS inputs.
     */
    inline Policy& WithHttpsInputs(InputPolicy&& value) { SetHttpsInputs(std::move(value)); return *this;}


    /**
     * Allow or disallow jobs that specify Amazon S3 inputs.
     */
    inline const InputPolicy& GetS3Inputs() const{ return m_s3Inputs; }

    /**
     * Allow or disallow jobs that specify Amazon S3 inputs.
     */
    inline bool S3InputsHasBeenSet() const { return m_s3InputsHasBeenSet; }

    /**
     * Allow or disallow jobs that specify Amazon S3 inputs.
     */
    inline void SetS3Inputs(const InputPolicy& value) { m_s3InputsHasBeenSet = true; m_s3Inputs = value; }

    /**
     * Allow or disallow jobs that specify Amazon S3 inputs.
     */
    inline void SetS3Inputs(InputPolicy&& value) { m_s3InputsHasBeenSet = true; m_s3Inputs = std::move(value); }

    /**
     * Allow or disallow jobs that specify Amazon S3 inputs.
     */
    inline Policy& WithS3Inputs(const InputPolicy& value) { SetS3Inputs(value); return *this;}

    /**
     * Allow or disallow jobs that specify Amazon S3 inputs.
     */
    inline Policy& WithS3Inputs(InputPolicy&& value) { SetS3Inputs(std::move(value)); return *this;}

  private:

    InputPolicy m_httpInputs;
    bool m_httpInputsHasBeenSet = false;

    InputPolicy m_httpsInputs;
    bool m_httpsInputsHasBeenSet = false;

    InputPolicy m_s3Inputs;
    bool m_s3InputsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
