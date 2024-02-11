/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
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
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>Specifies a single cookie or set of cookies in an end user's
   * browser.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CookieSpecification">AWS
   * API Reference</a></p>
   */
  class CookieSpecification
  {
  public:
    AWS_WORKSPACESWEB_API CookieSpecification();
    AWS_WORKSPACESWEB_API CookieSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API CookieSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The domain of the cookie.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain of the cookie.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The domain of the cookie.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain of the cookie.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The domain of the cookie.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The domain of the cookie.</p>
     */
    inline CookieSpecification& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain of the cookie.</p>
     */
    inline CookieSpecification& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The domain of the cookie.</p>
     */
    inline CookieSpecification& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The name of the cookie.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the cookie.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the cookie.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the cookie.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the cookie.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the cookie.</p>
     */
    inline CookieSpecification& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the cookie.</p>
     */
    inline CookieSpecification& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the cookie.</p>
     */
    inline CookieSpecification& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The path of the cookie.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path of the cookie.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path of the cookie.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path of the cookie.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path of the cookie.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path of the cookie.</p>
     */
    inline CookieSpecification& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path of the cookie.</p>
     */
    inline CookieSpecification& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path of the cookie.</p>
     */
    inline CookieSpecification& WithPath(const char* value) { SetPath(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
