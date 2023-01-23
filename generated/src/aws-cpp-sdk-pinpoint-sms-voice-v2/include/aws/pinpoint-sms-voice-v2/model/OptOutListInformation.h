/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>The information for all OptOutList in an Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/OptOutListInformation">AWS
   * API Reference</a></p>
   */
  class OptOutListInformation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API OptOutListInformation();
    AWS_PINPOINTSMSVOICEV2_API OptOutListInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API OptOutListInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the OptOutList.</p>
     */
    inline const Aws::String& GetOptOutListArn() const{ return m_optOutListArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the OptOutList.</p>
     */
    inline bool OptOutListArnHasBeenSet() const { return m_optOutListArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the OptOutList.</p>
     */
    inline void SetOptOutListArn(const Aws::String& value) { m_optOutListArnHasBeenSet = true; m_optOutListArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the OptOutList.</p>
     */
    inline void SetOptOutListArn(Aws::String&& value) { m_optOutListArnHasBeenSet = true; m_optOutListArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the OptOutList.</p>
     */
    inline void SetOptOutListArn(const char* value) { m_optOutListArnHasBeenSet = true; m_optOutListArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the OptOutList.</p>
     */
    inline OptOutListInformation& WithOptOutListArn(const Aws::String& value) { SetOptOutListArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the OptOutList.</p>
     */
    inline OptOutListInformation& WithOptOutListArn(Aws::String&& value) { SetOptOutListArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the OptOutList.</p>
     */
    inline OptOutListInformation& WithOptOutListArn(const char* value) { SetOptOutListArn(value); return *this;}


    /**
     * <p>The name of the OptOutList.</p>
     */
    inline const Aws::String& GetOptOutListName() const{ return m_optOutListName; }

    /**
     * <p>The name of the OptOutList.</p>
     */
    inline bool OptOutListNameHasBeenSet() const { return m_optOutListNameHasBeenSet; }

    /**
     * <p>The name of the OptOutList.</p>
     */
    inline void SetOptOutListName(const Aws::String& value) { m_optOutListNameHasBeenSet = true; m_optOutListName = value; }

    /**
     * <p>The name of the OptOutList.</p>
     */
    inline void SetOptOutListName(Aws::String&& value) { m_optOutListNameHasBeenSet = true; m_optOutListName = std::move(value); }

    /**
     * <p>The name of the OptOutList.</p>
     */
    inline void SetOptOutListName(const char* value) { m_optOutListNameHasBeenSet = true; m_optOutListName.assign(value); }

    /**
     * <p>The name of the OptOutList.</p>
     */
    inline OptOutListInformation& WithOptOutListName(const Aws::String& value) { SetOptOutListName(value); return *this;}

    /**
     * <p>The name of the OptOutList.</p>
     */
    inline OptOutListInformation& WithOptOutListName(Aws::String&& value) { SetOptOutListName(std::move(value)); return *this;}

    /**
     * <p>The name of the OptOutList.</p>
     */
    inline OptOutListInformation& WithOptOutListName(const char* value) { SetOptOutListName(value); return *this;}


    /**
     * <p>The time when the OutOutList was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time when the OutOutList was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time when the OutOutList was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time when the OutOutList was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time when the OutOutList was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline OptOutListInformation& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time when the OutOutList was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline OptOutListInformation& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_optOutListArn;
    bool m_optOutListArnHasBeenSet = false;

    Aws::String m_optOutListName;
    bool m_optOutListNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
