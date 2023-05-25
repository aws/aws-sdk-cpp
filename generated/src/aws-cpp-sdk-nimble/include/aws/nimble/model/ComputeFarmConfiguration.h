/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>The configuration for a render farm that is associated with a studio
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ComputeFarmConfiguration">AWS
   * API Reference</a></p>
   */
  class ComputeFarmConfiguration
  {
  public:
    AWS_NIMBLESTUDIO_API ComputeFarmConfiguration();
    AWS_NIMBLESTUDIO_API ComputeFarmConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API ComputeFarmConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an Active Directory user that is used on ComputeFarm worker
     * instances.</p>
     */
    inline const Aws::String& GetActiveDirectoryUser() const{ return m_activeDirectoryUser; }

    /**
     * <p>The name of an Active Directory user that is used on ComputeFarm worker
     * instances.</p>
     */
    inline bool ActiveDirectoryUserHasBeenSet() const { return m_activeDirectoryUserHasBeenSet; }

    /**
     * <p>The name of an Active Directory user that is used on ComputeFarm worker
     * instances.</p>
     */
    inline void SetActiveDirectoryUser(const Aws::String& value) { m_activeDirectoryUserHasBeenSet = true; m_activeDirectoryUser = value; }

    /**
     * <p>The name of an Active Directory user that is used on ComputeFarm worker
     * instances.</p>
     */
    inline void SetActiveDirectoryUser(Aws::String&& value) { m_activeDirectoryUserHasBeenSet = true; m_activeDirectoryUser = std::move(value); }

    /**
     * <p>The name of an Active Directory user that is used on ComputeFarm worker
     * instances.</p>
     */
    inline void SetActiveDirectoryUser(const char* value) { m_activeDirectoryUserHasBeenSet = true; m_activeDirectoryUser.assign(value); }

    /**
     * <p>The name of an Active Directory user that is used on ComputeFarm worker
     * instances.</p>
     */
    inline ComputeFarmConfiguration& WithActiveDirectoryUser(const Aws::String& value) { SetActiveDirectoryUser(value); return *this;}

    /**
     * <p>The name of an Active Directory user that is used on ComputeFarm worker
     * instances.</p>
     */
    inline ComputeFarmConfiguration& WithActiveDirectoryUser(Aws::String&& value) { SetActiveDirectoryUser(std::move(value)); return *this;}

    /**
     * <p>The name of an Active Directory user that is used on ComputeFarm worker
     * instances.</p>
     */
    inline ComputeFarmConfiguration& WithActiveDirectoryUser(const char* value) { SetActiveDirectoryUser(value); return *this;}


    /**
     * <p>The endpoint of the ComputeFarm that is accessed by the studio component
     * resource.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint of the ComputeFarm that is accessed by the studio component
     * resource.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The endpoint of the ComputeFarm that is accessed by the studio component
     * resource.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint of the ComputeFarm that is accessed by the studio component
     * resource.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The endpoint of the ComputeFarm that is accessed by the studio component
     * resource.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The endpoint of the ComputeFarm that is accessed by the studio component
     * resource.</p>
     */
    inline ComputeFarmConfiguration& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint of the ComputeFarm that is accessed by the studio component
     * resource.</p>
     */
    inline ComputeFarmConfiguration& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint of the ComputeFarm that is accessed by the studio component
     * resource.</p>
     */
    inline ComputeFarmConfiguration& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}

  private:

    Aws::String m_activeDirectoryUser;
    bool m_activeDirectoryUserHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
