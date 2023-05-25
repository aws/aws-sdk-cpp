/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>

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
namespace Rekognition
{
namespace Model
{

  /**
   * <p> Allows you to opt in or opt out to share data with Rekognition to improve
   * model performance. You can choose this option at the account level or on a
   * per-stream basis. Note that if you opt out at the account level this setting is
   * ignored on individual streams. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StreamProcessorDataSharingPreference">AWS
   * API Reference</a></p>
   */
  class StreamProcessorDataSharingPreference
  {
  public:
    AWS_REKOGNITION_API StreamProcessorDataSharingPreference();
    AWS_REKOGNITION_API StreamProcessorDataSharingPreference(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API StreamProcessorDataSharingPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> If this option is set to true, you choose to share data with Rekognition to
     * improve model performance. </p>
     */
    inline bool GetOptIn() const{ return m_optIn; }

    /**
     * <p> If this option is set to true, you choose to share data with Rekognition to
     * improve model performance. </p>
     */
    inline bool OptInHasBeenSet() const { return m_optInHasBeenSet; }

    /**
     * <p> If this option is set to true, you choose to share data with Rekognition to
     * improve model performance. </p>
     */
    inline void SetOptIn(bool value) { m_optInHasBeenSet = true; m_optIn = value; }

    /**
     * <p> If this option is set to true, you choose to share data with Rekognition to
     * improve model performance. </p>
     */
    inline StreamProcessorDataSharingPreference& WithOptIn(bool value) { SetOptIn(value); return *this;}

  private:

    bool m_optIn;
    bool m_optInHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
