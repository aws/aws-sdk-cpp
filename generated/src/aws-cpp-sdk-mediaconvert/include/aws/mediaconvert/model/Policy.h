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
    AWS_MEDIACONVERT_API Policy() = default;
    AWS_MEDIACONVERT_API Policy(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Policy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Allow or disallow jobs that specify HTTP inputs.
     */
    inline InputPolicy GetHttpInputs() const { return m_httpInputs; }
    inline bool HttpInputsHasBeenSet() const { return m_httpInputsHasBeenSet; }
    inline void SetHttpInputs(InputPolicy value) { m_httpInputsHasBeenSet = true; m_httpInputs = value; }
    inline Policy& WithHttpInputs(InputPolicy value) { SetHttpInputs(value); return *this;}
    ///@}

    ///@{
    /**
     * Allow or disallow jobs that specify HTTPS inputs.
     */
    inline InputPolicy GetHttpsInputs() const { return m_httpsInputs; }
    inline bool HttpsInputsHasBeenSet() const { return m_httpsInputsHasBeenSet; }
    inline void SetHttpsInputs(InputPolicy value) { m_httpsInputsHasBeenSet = true; m_httpsInputs = value; }
    inline Policy& WithHttpsInputs(InputPolicy value) { SetHttpsInputs(value); return *this;}
    ///@}

    ///@{
    /**
     * Allow or disallow jobs that specify Amazon S3 inputs.
     */
    inline InputPolicy GetS3Inputs() const { return m_s3Inputs; }
    inline bool S3InputsHasBeenSet() const { return m_s3InputsHasBeenSet; }
    inline void SetS3Inputs(InputPolicy value) { m_s3InputsHasBeenSet = true; m_s3Inputs = value; }
    inline Policy& WithS3Inputs(InputPolicy value) { SetS3Inputs(value); return *this;}
    ///@}
  private:

    InputPolicy m_httpInputs{InputPolicy::NOT_SET};
    bool m_httpInputsHasBeenSet = false;

    InputPolicy m_httpsInputs{InputPolicy::NOT_SET};
    bool m_httpsInputsHasBeenSet = false;

    InputPolicy m_s3Inputs{InputPolicy::NOT_SET};
    bool m_s3InputsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
