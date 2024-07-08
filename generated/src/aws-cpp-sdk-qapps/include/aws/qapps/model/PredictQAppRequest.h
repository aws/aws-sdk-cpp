/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/qapps/QAppsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/PredictQAppInputOptions.h>
#include <utility>

namespace Aws
{
namespace QApps
{
namespace Model
{

  /**
   */
  class PredictQAppRequest : public QAppsRequest
  {
  public:
    AWS_QAPPS_API PredictQAppRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PredictQApp"; }

    AWS_QAPPS_API Aws::String SerializePayload() const override;

    AWS_QAPPS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the Amazon Q Business application environment
     * instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline PredictQAppRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline PredictQAppRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline PredictQAppRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input to generate the Q App definition from, either a conversation or
     * problem statement.</p>
     */
    inline const PredictQAppInputOptions& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const PredictQAppInputOptions& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(PredictQAppInputOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline PredictQAppRequest& WithOptions(const PredictQAppInputOptions& value) { SetOptions(value); return *this;}
    inline PredictQAppRequest& WithOptions(PredictQAppInputOptions&& value) { SetOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    PredictQAppInputOptions m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
