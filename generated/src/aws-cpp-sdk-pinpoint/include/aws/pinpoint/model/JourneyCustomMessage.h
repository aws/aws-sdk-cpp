/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the message content for a custom channel message that's sent to
   * participants in a journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/JourneyCustomMessage">AWS
   * API Reference</a></p>
   */
  class JourneyCustomMessage
  {
  public:
    AWS_PINPOINT_API JourneyCustomMessage();
    AWS_PINPOINT_API JourneyCustomMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API JourneyCustomMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The message content that's passed to an AWS Lambda function or to a web
     * hook.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * <p>The message content that's passed to an AWS Lambda function or to a web
     * hook.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The message content that's passed to an AWS Lambda function or to a web
     * hook.</p>
     */
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The message content that's passed to an AWS Lambda function or to a web
     * hook.</p>
     */
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The message content that's passed to an AWS Lambda function or to a web
     * hook.</p>
     */
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }

    /**
     * <p>The message content that's passed to an AWS Lambda function or to a web
     * hook.</p>
     */
    inline JourneyCustomMessage& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * <p>The message content that's passed to an AWS Lambda function or to a web
     * hook.</p>
     */
    inline JourneyCustomMessage& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>The message content that's passed to an AWS Lambda function or to a web
     * hook.</p>
     */
    inline JourneyCustomMessage& WithData(const char* value) { SetData(value); return *this;}

  private:

    Aws::String m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
