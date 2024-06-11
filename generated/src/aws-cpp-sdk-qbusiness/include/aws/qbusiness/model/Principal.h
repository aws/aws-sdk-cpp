﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/PrincipalUser.h>
#include <aws/qbusiness/model/PrincipalGroup.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Provides user and group information used for filtering documents to use for
   * generating Amazon Q Business conversation responses.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/Principal">AWS
   * API Reference</a></p>
   */
  class Principal
  {
  public:
    AWS_QBUSINESS_API Principal();
    AWS_QBUSINESS_API Principal(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Principal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user associated with the principal.</p>
     */
    inline const PrincipalUser& GetUser() const{ return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    inline void SetUser(const PrincipalUser& value) { m_userHasBeenSet = true; m_user = value; }
    inline void SetUser(PrincipalUser&& value) { m_userHasBeenSet = true; m_user = std::move(value); }
    inline Principal& WithUser(const PrincipalUser& value) { SetUser(value); return *this;}
    inline Principal& WithUser(PrincipalUser&& value) { SetUser(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The group associated with the principal.</p>
     */
    inline const PrincipalGroup& GetGroup() const{ return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    inline void SetGroup(const PrincipalGroup& value) { m_groupHasBeenSet = true; m_group = value; }
    inline void SetGroup(PrincipalGroup&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }
    inline Principal& WithGroup(const PrincipalGroup& value) { SetGroup(value); return *this;}
    inline Principal& WithGroup(PrincipalGroup&& value) { SetGroup(std::move(value)); return *this;}
    ///@}
  private:

    PrincipalUser m_user;
    bool m_userHasBeenSet = false;

    PrincipalGroup m_group;
    bool m_groupHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
