/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * The output of the bridge. A flow output is delivered to the AWS cloud.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/BridgeFlowOutput">AWS
   * API Reference</a></p>
   */
  class BridgeFlowOutput
  {
  public:
    AWS_MEDIACONNECT_API BridgeFlowOutput();
    AWS_MEDIACONNECT_API BridgeFlowOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API BridgeFlowOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The Amazon Resource Number (ARN) of the cloud flow.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }
    inline BridgeFlowOutput& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline BridgeFlowOutput& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline BridgeFlowOutput& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The Amazon Resource Number (ARN) of the flow source.
     */
    inline const Aws::String& GetFlowSourceArn() const{ return m_flowSourceArn; }
    inline bool FlowSourceArnHasBeenSet() const { return m_flowSourceArnHasBeenSet; }
    inline void SetFlowSourceArn(const Aws::String& value) { m_flowSourceArnHasBeenSet = true; m_flowSourceArn = value; }
    inline void SetFlowSourceArn(Aws::String&& value) { m_flowSourceArnHasBeenSet = true; m_flowSourceArn = std::move(value); }
    inline void SetFlowSourceArn(const char* value) { m_flowSourceArnHasBeenSet = true; m_flowSourceArn.assign(value); }
    inline BridgeFlowOutput& WithFlowSourceArn(const Aws::String& value) { SetFlowSourceArn(value); return *this;}
    inline BridgeFlowOutput& WithFlowSourceArn(Aws::String&& value) { SetFlowSourceArn(std::move(value)); return *this;}
    inline BridgeFlowOutput& WithFlowSourceArn(const char* value) { SetFlowSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the bridge's output.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline BridgeFlowOutput& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline BridgeFlowOutput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline BridgeFlowOutput& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::String m_flowSourceArn;
    bool m_flowSourceArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
