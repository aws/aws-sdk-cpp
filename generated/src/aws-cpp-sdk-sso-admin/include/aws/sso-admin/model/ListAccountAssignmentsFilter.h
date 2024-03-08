/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>A structure that describes a filter for account assignments.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountAssignmentsFilter">AWS
   * API Reference</a></p>
   */
  class ListAccountAssignmentsFilter
  {
  public:
    AWS_SSOADMIN_API ListAccountAssignmentsFilter();
    AWS_SSOADMIN_API ListAccountAssignmentsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API ListAccountAssignmentsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID number of an Amazon Web Services account that filters the results in
     * the response.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID number of an Amazon Web Services account that filters the results in
     * the response.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID number of an Amazon Web Services account that filters the results in
     * the response.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID number of an Amazon Web Services account that filters the results in
     * the response.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID number of an Amazon Web Services account that filters the results in
     * the response.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID number of an Amazon Web Services account that filters the results in
     * the response.</p>
     */
    inline ListAccountAssignmentsFilter& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID number of an Amazon Web Services account that filters the results in
     * the response.</p>
     */
    inline ListAccountAssignmentsFilter& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID number of an Amazon Web Services account that filters the results in
     * the response.</p>
     */
    inline ListAccountAssignmentsFilter& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
