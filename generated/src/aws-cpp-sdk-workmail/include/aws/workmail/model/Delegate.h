/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/MemberType.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>The name of the attribute, which is one of the values defined in the
   * UserAttribute enumeration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/Delegate">AWS
   * API Reference</a></p>
   */
  class Delegate
  {
  public:
    AWS_WORKMAIL_API Delegate() = default;
    AWS_WORKMAIL_API Delegate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Delegate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the user or group associated as the resource's
     * delegate.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Delegate& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the delegate: user or group.</p>
     */
    inline MemberType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MemberType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Delegate& WithType(MemberType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    MemberType m_type{MemberType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
