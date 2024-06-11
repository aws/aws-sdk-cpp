﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/DesiredWeightAndCapacity.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateEndpointWeightsAndCapacitiesRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateEndpointWeightsAndCapacitiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEndpointWeightsAndCapacities"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of an existing SageMaker endpoint.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }
    inline UpdateEndpointWeightsAndCapacitiesRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}
    inline UpdateEndpointWeightsAndCapacitiesRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}
    inline UpdateEndpointWeightsAndCapacitiesRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that provides new capacity and weight values for a variant.</p>
     */
    inline const Aws::Vector<DesiredWeightAndCapacity>& GetDesiredWeightsAndCapacities() const{ return m_desiredWeightsAndCapacities; }
    inline bool DesiredWeightsAndCapacitiesHasBeenSet() const { return m_desiredWeightsAndCapacitiesHasBeenSet; }
    inline void SetDesiredWeightsAndCapacities(const Aws::Vector<DesiredWeightAndCapacity>& value) { m_desiredWeightsAndCapacitiesHasBeenSet = true; m_desiredWeightsAndCapacities = value; }
    inline void SetDesiredWeightsAndCapacities(Aws::Vector<DesiredWeightAndCapacity>&& value) { m_desiredWeightsAndCapacitiesHasBeenSet = true; m_desiredWeightsAndCapacities = std::move(value); }
    inline UpdateEndpointWeightsAndCapacitiesRequest& WithDesiredWeightsAndCapacities(const Aws::Vector<DesiredWeightAndCapacity>& value) { SetDesiredWeightsAndCapacities(value); return *this;}
    inline UpdateEndpointWeightsAndCapacitiesRequest& WithDesiredWeightsAndCapacities(Aws::Vector<DesiredWeightAndCapacity>&& value) { SetDesiredWeightsAndCapacities(std::move(value)); return *this;}
    inline UpdateEndpointWeightsAndCapacitiesRequest& AddDesiredWeightsAndCapacities(const DesiredWeightAndCapacity& value) { m_desiredWeightsAndCapacitiesHasBeenSet = true; m_desiredWeightsAndCapacities.push_back(value); return *this; }
    inline UpdateEndpointWeightsAndCapacitiesRequest& AddDesiredWeightsAndCapacities(DesiredWeightAndCapacity&& value) { m_desiredWeightsAndCapacitiesHasBeenSet = true; m_desiredWeightsAndCapacities.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::Vector<DesiredWeightAndCapacity> m_desiredWeightsAndCapacities;
    bool m_desiredWeightsAndCapacitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
