/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DashboardErrorType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/Entity.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Dashboard error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardError">AWS
   * API Reference</a></p>
   */
  class DashboardError
  {
  public:
    AWS_QUICKSIGHT_API DashboardError() = default;
    AWS_QUICKSIGHT_API DashboardError(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DashboardError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Type.</p>
     */
    inline DashboardErrorType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DashboardErrorType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DashboardError& WithType(DashboardErrorType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DashboardError& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the violated entities that caused the dashboard error.</p>
     */
    inline const Aws::Vector<Entity>& GetViolatedEntities() const { return m_violatedEntities; }
    inline bool ViolatedEntitiesHasBeenSet() const { return m_violatedEntitiesHasBeenSet; }
    template<typename ViolatedEntitiesT = Aws::Vector<Entity>>
    void SetViolatedEntities(ViolatedEntitiesT&& value) { m_violatedEntitiesHasBeenSet = true; m_violatedEntities = std::forward<ViolatedEntitiesT>(value); }
    template<typename ViolatedEntitiesT = Aws::Vector<Entity>>
    DashboardError& WithViolatedEntities(ViolatedEntitiesT&& value) { SetViolatedEntities(std::forward<ViolatedEntitiesT>(value)); return *this;}
    template<typename ViolatedEntitiesT = Entity>
    DashboardError& AddViolatedEntities(ViolatedEntitiesT&& value) { m_violatedEntitiesHasBeenSet = true; m_violatedEntities.emplace_back(std::forward<ViolatedEntitiesT>(value)); return *this; }
    ///@}
  private:

    DashboardErrorType m_type{DashboardErrorType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Entity> m_violatedEntities;
    bool m_violatedEntitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
