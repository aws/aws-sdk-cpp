/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
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
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   * <p>This property corresponds to the <i>AWS CloudFormation <a
   * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RollbackTrigger">RollbackTrigger</a>

   * </i> Data Type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/RollbackTrigger">AWS
   * API Reference</a></p>
   */
  class RollbackTrigger
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API RollbackTrigger() = default;
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API RollbackTrigger(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API RollbackTrigger& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This property corresponds to the content of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RollbackTrigger">RollbackTrigger</a>

     * </i> Data Type.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RollbackTrigger& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This property corresponds to the content of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RollbackTrigger">RollbackTrigger</a>

     * </i> Data Type.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    RollbackTrigger& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
