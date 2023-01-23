/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * The settings for a MediaConnect Flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaConnectFlow">AWS
   * API Reference</a></p>
   */
  class MediaConnectFlow
  {
  public:
    AWS_MEDIALIVE_API MediaConnectFlow();
    AWS_MEDIALIVE_API MediaConnectFlow(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MediaConnectFlow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The unique ARN of the MediaConnect Flow being used as a source.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The unique ARN of the MediaConnect Flow being used as a source.
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * The unique ARN of the MediaConnect Flow being used as a source.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * The unique ARN of the MediaConnect Flow being used as a source.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * The unique ARN of the MediaConnect Flow being used as a source.
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * The unique ARN of the MediaConnect Flow being used as a source.
     */
    inline MediaConnectFlow& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The unique ARN of the MediaConnect Flow being used as a source.
     */
    inline MediaConnectFlow& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The unique ARN of the MediaConnect Flow being used as a source.
     */
    inline MediaConnectFlow& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}

  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
